//
// Created by KiritanMAC on 08/04/2023.
//
#include <iostream>
#include <iterator>
#include <numeric>
#include <list>

int main() {
    std::list a{1, 2, 3, 4, 5};
    auto s = std::accumulate(a.begin(), a.end(), std::string(),
                             [](std::string a, int b) { return std::move(a) + '-' + std::to_string(b); });
    s.erase(s.begin());
    std::cout << s << std::endl;
    return 0;
}