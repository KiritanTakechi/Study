//
// Created by KiritanMAC on 09/03/2023.
//

#include <iostream>
#include <mutex>
#include <condition_variable>

using namespace std;

class Foo {
    condition_variable cv;
    mutex mtx;
    int k = 0;
public:
    void first(const function<void()>& printFirst) {
        printFirst();
        k = 1;
        cv.notify_all();    // 通知其他所有在等待唤醒队列中的线程
    }

    void second(const function<void()>& printSecond) {
        unique_lock<mutex> lock(mtx);   // lock mtx
        cv.wait(lock, [this](){ return k == 1; });  // unlock mtx，并阻塞等待唤醒通知，需要满足 k == 1 才能继续运行
        printSecond();
        k = 2;
        cv.notify_one();    // 随机通知一个（unspecified）在等待唤醒队列中的线程
    }

    void third(const function<void()>& printThird) {
        unique_lock<mutex> lock(mtx);   // lock mtx
        cv.wait(lock, [this](){ return k == 2; });  // unlock mtx，并阻塞等待唤醒通知，需要满足 k == 2 才能继续运行
        printThird();
    }
};