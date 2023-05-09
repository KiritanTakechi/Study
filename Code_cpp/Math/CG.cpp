//
// Created by KiritanMAC on 24/03/2023.
//
#include <iostream>
#include <utility>
#include <iomanip>

#include <Eigen/Dense>

#include <autodiff/forward/dual.hpp>
#include <autodiff/forward/dual/eigen.hpp>

using namespace std;
using namespace Eigen;
using namespace autodiff;
using namespace autodiff::detail;

template<typename T, size_t Size, typename Func = function<T(Matrix<T, Size, 1>)>>
class CG {//写烂了，下次写CGLS算法吧
    using Vec = Matrix<T, Size, 1>;
    using Mat = Matrix<T, Size, Size>;
public:
    explicit CG(Func func) noexcept: _func_ptr(std::move(func)) {
        _last_direction.setZero();
    }

    auto init(Vec x, const double phi) {
        _x_point = x;
        _phi = phi;
        return conjugate_gradient();
    }

    auto conjugate_gradient() {
        int iter = 0;
        do {
            _gx = gradient(_func_ptr, wrt(_x_point), at(_x_point));
            _hx = hessian(_func_ptr, wrt(_x_point), at(_x_point));
            Vec cg_direction = get_direction(std::forward<int>(iter));
            T cg_alpha = get_alpha();
            _x_point += get_alpha() * _last_direction;
            _last_gx = _gx;
            iter++;
            /*std::cout << std::setw(3) << iter << std::setw(10) << _x_point.transpose() << std::setw(20)
                      << _func_ptr(_x_point) << std::setw(10) << _gx.transpose() << std::setw(20) << _gx.norm() << endl;*/
            if (_gx.norm() < _phi) break;
        } while (true);
        return _x_point;
    }

    T get_alpha() {
        Vec d = -_gx;
        T numerator = _gx.transpose() * d;
        T denominator = d.transpose() * _hx * d;
        _last_alpha = -numerator / denominator;
        return _last_alpha;
    }

    T get_beta(int &&k) {
        if (k) {
            //Polak-Ribière共轭梯度算法
            _last_beta = _gx.dot(_gx - _last_gx) / _last_gx.dot(_last_gx);
            //Hestenes-Stiefel共轭梯度算法
            //_last_beta = _last_direction.dot(_gx - _last_gx) / _last_gx.dot(_hx * _last_direction);
        } else _last_beta = 0;
        return _last_beta;
    }

    Vec get_direction(int &&k) {
        T gd_beta = get_beta(std::forward<int>(k));
        _last_direction = -_gx + gd_beta * _last_direction;
        return _last_direction;
    }

    template<typename... Args>
    auto operator()(Args &&... args) noexcept {
        return init(std::forward<Args>(args)...);
    }

private:
    Func _func_ptr;
    T _last_alpha = 0, _last_beta = 0;
    double _phi = 0;
    Vec _x_point, _last_direction;
    Vec _gx, _last_gx;
    Mat _hx;
};

dual2nd f(const Vector4dual2nd &x) noexcept {
    return pow(x(0) + 10 * x(1), 2)
           + 5 * pow(x(2) - x(3), 2)
           + pow(x(1) - 2 * x(2), 4)
           + 10 * pow(x(0) - x(3), 4);
}

int main() {
    constexpr double phi = 0.001;
    auto first_guess = Vector4dual2nd(3, -1, 0, 1);
    CG<dual2nd, 4> powell(f);

    cout << "最优解x坐标" << setw(65) << "最小值" << endl;

    auto x = powell(first_guess, phi);
    cout << x.transpose() << setw(30) << f(x) << endl;
    return 0;
}