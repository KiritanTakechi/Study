//
// Created by KiritanMAC on 04/03/2023.
//

#include <iostream>
#include <vector>
#include <ranges>

using namespace std;

class Solution {
public:
    static constexpr void merge(vector<int> &A, int m, vector<int> &B, int n) noexcept {
        A.resize(m);
        B.resize(n);
        for_each(B.begin(), B.end(), [&](const auto &item) {
            A.insert(upper_bound(A.cbegin(), A.cend(), item), item);
        });
    }
};

int main() {
    vector<int> a = {1, 2, 3, 0, 0, 0};
    vector<int> b = {2, 5, 6};
    Solution::merge(a, 3, b, 3);
    for (const auto &item: a)
        cout<<item<<' ';
    return 0;
}