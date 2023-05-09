//
// Created by KiritanMAC on 07/04/2023.
//
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int main() {
    std::vector<uint64_t> a(10);
    std::ostream_iterator<uint64_t> out(std::cout," ");
    std::iota(a.begin(), a.end(),1);
    std::copy(a.cbegin(), a.cend(),out);
    std::endl(std::cout);

    std::partial_sum(a.cbegin(), a.cend(),out,std::plus<>());
    std::endl(std::cout);

    std::inclusive_scan(a.cbegin(), a.cend(),out,std::plus<>(),0);
    std::endl(std::cout);

    std::exclusive_scan(a.cbegin(), a.cend(),out,0,std::plus<>());
    std::endl(std::cout);

    std::transform_inclusive_scan(a.cbegin(), a.cend(),out,std::plus<>{},[&](auto item){return item*10;},0);
    std::endl(std::cout);

    std::transform_exclusive_scan(a.cbegin(), a.cend(),out,0,std::plus<>{},[&](auto item){return item*10;});

    std::endl(std::cout);

    std::endl(std::cout);
    return 0;
}