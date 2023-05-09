//
// Created by KiritanMAC on 12/03/2023.
//
#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    unordered_map<char, pair<int, int>> s_hash;
    string s;
    int ans = 1;
    getline(cin, s);
    if (!s.length()) {
        cout << 0;
        return 0;
    }
    s_hash.emplace(s[0], make_pair(0, 1));
    for (int i(1); i < s.length(); ++i) {
        if (auto tmp = s_hash[s[i - 1]].second;
                s_hash.contains(s[i]) && ((i - s_hash[s[i]].first) <= tmp)) {
            auto _ = s_hash[s[i - 1]].second -
                     (s_hash[s[i]].first - (s_hash[s[i - 1]].first - s_hash[s[i - 1]].second)) + 1;
            ans = max(ans, _);
            s_hash[s[i]] = make_pair(i, _);
        } else {
            auto _ = s_hash[s[i - 1]].second + 1;
            ans = max(ans, _);
            s_hash[s[i]] = make_pair(i, _);
        }
    }
    cout << ans;
    return 0;
}