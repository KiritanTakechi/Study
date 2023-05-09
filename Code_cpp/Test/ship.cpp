//
// Created by KiritanMAC on 25/03/2023.
//
#include <iostream>
#include <utility>

using namespace std;

struct A {
    A(int value_0, int value_1) : a(value_0), b(value_1) {}

    auto operator<=>(const A &A_) const {
        return this->a <=> A_.a;
    }

    auto operator==(const A &A_) const {
        return this->b == A_.b;
    }

    int a, b;
};

int main() {
    auto x = A{4, 5};
    auto y = A{1, 5};
    cout << (x == y) << endl;
    return 0;
}