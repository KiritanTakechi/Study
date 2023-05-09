#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <memory>

using namespace std;

void f() {
    cout << 'f()' << endl;
}

int main(int argc, char *argv[]) {
    auto p = &f;
    unique_ptr<void (*)()> p = [](int x, int y) { return x + y; };
    return 0;
}