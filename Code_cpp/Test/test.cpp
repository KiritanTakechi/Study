#include <iostream>
#include <array>
#include <ranges>
#include <sstream>
#include <iterator>

using namespace std;

std::array<int, 5> a = {1, 2, 3, 4, 5};


template<typename ...Arg>
auto func(Arg ...args) {
    return tie(args...);
}

int main() {

    copy(a.cbegin(),a.cend(),ostream_iterator<int>(cout," "));

    endl(cout);

    auto [x, y, z] = func(1, 2, 3);

    cout<<x;

    endl(cout);

    for (int i: a | ranges::views::reverse) {
        cout << i << ' ';
    }

    endl(cout);

    for (int i: a | ranges::views::filter([&](const auto &item) {
        return item % 2;
    })) {
        cout << i << ' ';
    }

    endl(cout);

    for (int i: a | ranges::views::transform([&](const auto &item) {
        return item * 2;
    })) {
        cout << i << ' ';
    }

    endl(cout);

    for_each(a.begin(), a.end(), [&](const auto &item) {
        cout << item << ' ';
    });

    endl(cout);

    for_each(a.rbegin(), a.rend(), [&](const auto &item) {
        cout << item << ' ';
    });

    endl(cout);


    std::string input;
    std::getline(std::cin, input);  // 读入一行字符串
    std::stringstream iss(input);

    std::vector<int> vec((std::istream_iterator<int>(iss)), std::istream_iterator<int>());

    std::cout << "vec: ";
    for (auto i: vec) {
        std::cout << i << " ";
    }

    return 0;
}