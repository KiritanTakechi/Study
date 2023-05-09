//
// Created by KiritanMAC on 04/03/2023.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<pair<int, int>> a;
    for (int i(0), tmp(0); i < 5; ++i) {
        cin >> tmp;
        a.emplace_back(i, tmp);
    }

    sort(a.begin(), a.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    });
    for(auto i:a)
        cout<<i.first<<'.'<<i.second<<endl;
    return 0;
}