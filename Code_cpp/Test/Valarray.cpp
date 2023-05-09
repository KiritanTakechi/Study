//
// Created by KiritanMAC on 08/04/2023.
//
#include <iostream>
#include <iterator>
#include <numeric>
#include <valarray>
#include <ranges>

int main(){
    std::ostream_iterator<int> out(std::cout," ");
    std::valarray<int> a(10);
    std::iota(begin(a),end(a),0);
    std::copy(begin(a),end(a),out);
    std::endl(std::cout);

    std::valarray<int> b = std::pow(2,a);
    std::copy(begin(b),end(b),out);
    std::endl(std::cout);
    return 0;
}