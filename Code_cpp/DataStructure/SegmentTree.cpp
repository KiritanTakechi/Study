//
// Created by KiritanMAC on 10/04/2023.
//
#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

constinit size_t MAXN = 10001;

template<typename T>
class SegmentTree {
public:
    explicit SegmentTree(std::vector<T> const& vec) {
        this->a = vec;
        build(1, vec.size(), 1);
    }

    SegmentTree(std::vector<T> vec, size_t size) : SegmentTree(vec) {
        a.resize(size);
        tree.resize(size);
    }

    T query(size_t ql, size_t qr, size_t l, size_t r, size_t idx) {
        if (ql > r || qr < l) { // 区间不重叠
            return 0; // 返回0或者其他默认值，具体根据题目要求而定
        }
        if (ql <= l && qr >= r) { // 区间完全覆盖
            return tree[idx];
        }
        size_t mid = l + (r - l) / 2;
        return query(ql, qr, l, mid, idx * 2) + query(ql, qr, mid + 1, r, idx * 2 + 1); // 区间部分覆盖
    }

    void modify(size_t pos, T val, size_t l, size_t r, size_t idx) {
        if (l == r) { // 叶节点
            tree[idx] = val;
            return;
        }
        size_t mid = l + (r - l) / 2;
        if (pos <= mid) { // 在左子树中
            modify(pos, val, l, mid, idx * 2);
        } else { // 在右子树中
            modify(pos, val, mid + 1, r, idx * 2 + 1);
        }
        tree[idx] = tree[idx * 2] + tree[idx * 2 + 1]; // 更新父节点
    }

private:
    std::vector<T> a, tree;

    void build(size_t l, size_t r, size_t idx) {
        if (l == r) { // 叶节点
            tree[idx] = a[l];
            return;
        }
        size_t mid = l + (r - l) / 2;
        build(l, mid, idx * 2); // 左子树
        build(mid + 1, r, idx * 2 + 1); // 右子树
        tree[idx] = tree[idx * 2] + tree[idx * 2 + 1]; // 父节点
    }
};


int main() {
    int n;
    std::vector<int> a(MAXN);
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        std::cin >> a[i];
    }
    auto tree = SegmentTree(a, MAXN);
    std::cout << tree.query(2, 4, 1, n, 1);
    return 0;
}