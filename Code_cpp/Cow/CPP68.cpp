//
// Created by KiritanMAC on 03/03/2023.
//
#include <iostream>
#include <set>

using namespace std;

template<typename T>
auto set_print(set<T> _s) {
    std::for_each(_s.begin(), _s.end(), [&](const auto &item) {
        cout << item << ' ';
    });
}

int main() {
    set<int> s;
    for (int i(0), tmp(0); i < 5; i++) {
        cin >> tmp;
        s.insert(tmp);
    }
    set_print(s);
    return 0;
}

