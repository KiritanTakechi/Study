//
// Created by KiritanMAC on 03/03/2023.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a;
    for (int i(0), tmp(0); i < 5; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    auto it = a.cbegin();
    while (true) {
        cout << *it << ' ';
        it++;
        if (it == a.cend())
            break;
    }
    putchar(10);
    while (true) {
        it--;
        cout << *it << ' ';
        if (it == a.cbegin())
            break;
    }
    return 0;
}