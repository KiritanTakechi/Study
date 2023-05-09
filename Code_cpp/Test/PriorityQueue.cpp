//
// Created by KiritanMAC on 08/04/2023.
//
#include <iostream>
#include <sstream>
#include <iterator>
#include <queue>
#include <vector>

struct A {
    A(int value_0, int value_1) : a(value_0), b(value_1) {}

    int a, b;
};

int main() {
    std::string s;
    getline(std::cin, s);
    std::stringstream in(s);

    //std::vector<int> vec((std::istream_iterator<int>(in)), std::istream_iterator<int>());

    std::priority_queue<A, std::vector<A>, decltype([](A x, A y) { return x.b < y.b; })> q;


    std::for_each(std::istream_iterator<int>(in), std::istream_iterator<int>(),
                  [index = 0, &q](auto item)mutable {
                      q.push(A{index++, item});
                  });
    std::generate_n(std::ostream_iterator<int>(std::cout, " "), q.size(), [&q]() {
        int item = q.top().b;
        q.pop();
        return item;
    });
    return 0;
}