//
// Created by KiritanMAC on 21/03/2023.
//
#include <iostream>

#include <Eigen/Dense>

#include <autodiff/forward/dual.hpp>
#include <autodiff/forward/dual/eigen.hpp>

using namespace std;
using namespace Eigen;
using namespace autodiff;

dual2nd f(const Vector2dual2nd &x) noexcept {
    return 100 * pow(x(1) - x(0), 2) + pow(1 - x(0), 2);
}

auto gradient_descent(Vector2dual2nd x, dual2nd phi) {
    do {
        Vector2dual2nd gx = gradient(f, wrt(x), at(x));
        Matrix2dual2nd hx = hessian(f, wrt(x), at(x));
        Vector2dual2nd d = -gx;
        dual2nd numerator = gx.transpose() * d;
        dual2nd denominator = d.transpose() * hx * d;
        dual2nd alpha = -numerator / denominator;
        x += alpha * d;
        if (gx.norm() < phi) break;
    } while (true);
    return x;
}

//求单根，多根计算机无法使用普通方法求解，PSO、FA没有学。
auto find_single_stationary_points(Vector2dual2nd guess_point, dual2nd phi) {
    return gradient_descent(guess_point, phi);
}

Vector2dual2nd get_gradient_direction(Vector2dual2nd guess_point) {
    return -gradient(f, wrt(guess_point), at(guess_point));
}

bool is_stationary_points(Vector2dual2nd stationary_points) {
    Matrix2dual2nd hx = hessian(f, wrt(stationary_points), at(stationary_points));
    Eigen::LDLT<MatrixXdual2nd> ldltOfA(hx);
    if (ldltOfA.info() == Eigen::Success) {
        return true;
    } else {
        return false;
    }
}

int main() {
    Eigen::initParallel();
    Eigen::setNbThreads(8);
    dual2nd &&phi = 0.001;
    Vector2dual2nd first_guess(-1, 2), second_guess(1.5, 1);
    cout << "[-1 ,2]初始点搜索方向：" << get_gradient_direction(first_guess).transpose() << endl;
    cout << "[1.5,1]初始点搜索方向：" << get_gradient_direction(second_guess).transpose() << endl;
    auto stationary_points = find_single_stationary_points(first_guess, phi);
    cout << "平稳点为" << stationary_points.transpose()
         << (is_stationary_points(stationary_points) ? "是局部最优解" : "不是局部最优解") << endl;
    return 0;
}