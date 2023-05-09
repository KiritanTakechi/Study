//
// Created by KiritanMAC on 15/03/2023.
//
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x) {
    return pow(x, 2) - 3 * x + 5;
}

double goldenSectionSearch(double a, double b, double eps) {
    double phi = (1 + sqrt(5)) / 2; // 黄金分割比例
    double c = b - (b - a) / phi;
    double d = a + (b - a) / phi;
    double fc = f(c);
    double fd = f(d);
    while (abs(b - a) > eps) {

        std::cout << std::setw(10) << a << std::setw(10) << a << std::setw(10) << c
                  << std::setw(10) << d << std::setw(10) << b - a << std::setw(10) << f(c)
                  << std::setw(10) << f(d) << std::endl;

        if (fc < fd) {
            b = d;
            d = c;
            c = b - (b - a) / phi;
            fd = fc;
            fc = f(c);
        } else {
            a = c;
            c = d;
            d = a + (b - a) / phi;
            fc = fd;
            fd = f(d);
        }
    }
    return (a + b) / 2;
}

int main() {
    std::cout << std::setw(10) << "a" << std::setw(10) << "b" << std::setw(10) << "al"
              << std::setw(10) << "ar" << std::setw(10) << "b-a" << std::setw(10) << "phil"
              << std::setw(10) << "phir" << std::endl;
    double a = 1.0, b = 2.0; // 区间[1,2]
    double eps = 0.05; // 控制误差0.05
    double x = goldenSectionSearch(a, b, eps); // 使用0.618法求解极小点
    double y = f(x); // 计算极小点对应的函数值
    cout << "The minimum point of f(x) in [1,2] is: " << x << endl;
    cout << "The minimum value of f(x) is: " << y << endl;
    return 0;
}