//
// Created by KiritanMAC on 17/03/2023.
//
#include <iostream>
#include <iomanip>

#include <Eigen/Dense>

#include <autodiff/forward/dual.hpp>
#include <autodiff/forward/dual/eigen.hpp>

using namespace std;
using namespace Eigen;
using namespace autodiff;
using namespace autodiff::detail;

dual2nd f(const Vector2dual2nd &x) noexcept {
    return pow((x(0) - 2), 2) + pow((x(0) - x(1) * 2), 2);
}

auto gradient_descent(Vector2dual2nd x, dual2nd phi) {
    std::cout << std::setw(3) << "k" << std::setw(30) << "x" << std::setw(20) << "f(x)"
              << std::setw(30) << "Gra(x)" << std::setw(24) << "Gra(x).norm<2>" << endl;
    int iter = 0;
    do {
        Vector2dual2nd gx = gradient(f, wrt(x), at(x));
        Matrix2dual2nd hx = hessian(f, wrt(x), at(x));
        Vector2dual2nd d = -gx;
        dual2nd numerator = gx.transpose() * d;
        dual2nd denominator = d.transpose() * hx * d;
        dual2nd alpha = -numerator / denominator;
        x += alpha * d;
        iter++;
        std::cout << std::setw(3) << iter << std::setw(10) << x.transpose() << std::setw(20) << f(x)
                  << std::setw(10) << gx.transpose() << std::setw(20) << gx.norm() << endl;
        if (gx.norm() < phi) break;
    } while (true);
    return x;
}

int main() {
    Eigen::initParallel();
    Eigen::setNbThreads(8);
    dual2nd &&phi = 0.4;
    Vector2dual2nd first_guess(0, 3);
    gradient_descent(first_guess, phi);
    return 0;
}