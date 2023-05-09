//
// Created by KiritanMAC on 11/03/2023.
//

#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class Fenwick_Tree {
public:
    Fenwick_Tree() = default;

    explicit Fenwick_Tree(const T &value);

    void push(const T &value);

    void update_add(const int &value_1, const T &value_2);

    T quit(const int &value) const;

    T quit(const int &value_1, const T &value_2) const;

    template<typename R>
    static constexpr auto lowbit(const R &value) noexcept {
        return std::move(value & -value);
    }

private:
    vector<T> vec;
    size_t vec_size = 1, vec_size_max;
};

template<typename T>
T Fenwick_Tree<T>::quit(const int &value_1, const T &value_2) const {
    return quit(value_2) - quit(value_1 - 1);
}

template<typename T>
T Fenwick_Tree<T>::quit(const int &value) const {
    T sum(0);
    for (int i = value; i > 0; i -= lowbit(i))
        sum += vec[i];
    return sum;
}

template<typename T>
void Fenwick_Tree<T>::update_add(const int &value_1, const T &value_2) {
    for (int i = value_1; i < vec_size_max; i += lowbit(i)) {
        vec[i] += value_2;
    }
}

template<typename T>
void Fenwick_Tree<T>::push(const T &value) {
    update_add(this->vec_size, value);
    ++(this->vec_size);
}

template<typename T>
Fenwick_Tree<T>::Fenwick_Tree(const T &value) {
    this->vec.resize(value + 1);
    vec_size_max = value + 1;
}


int main() {
    int n(0), m(0);
    cin >> n >> m;
    Fenwick_Tree<int> tree(n);
    while (n--) {
        int _tmp;
        cin >> _tmp;
        tree.push(_tmp);
    }
    while (m--) {
        int _tmp(0), __tmp(0), p(0);
        cin >> p;
        switch (p) {
            case 1:
                cin >> _tmp >> __tmp;
                tree.update_add(_tmp, __tmp);
                break;
            case 2:
                cin >> _tmp >> __tmp;
                cout << tree.quit(_tmp, __tmp) << endl;
                break;
        }
    }
}