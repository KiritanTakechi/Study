//
// Created by KiritanMAC on 07/04/2023.
//
#include <iostream>
#include <tuple>

template<typename...Ts>
void print(const std::tuple<Ts...> &tu) {
    [&tu]<size_t...I>(std::index_sequence<I...>) {
        std::cout << '[';
        (..., (std::cout << std::get<I>(tu) << (I != sizeof...(Ts) - 1 ? "," : "")));
        std::cout << "]\n";
    }(std::index_sequence_for<Ts...>());
}

int main() {
    std::tuple t(141L, "sgsg", "我超", 35.252F);
    print(t);
    return 0;
}