#include <functional>
#include <semaphore>

using namespace std;

class Foo {
private:
    binary_semaphore semFirst{1};
    binary_semaphore semSecond{0};
    binary_semaphore semThird{0};
public:
    Foo() {
    }

    void first(function<void()> printFirst) {
        semFirst.acquire();
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        semSecond.release();
    }

    void second(function<void()> printSecond) {
        semSecond.acquire();
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        semThird.release();
    }

    void third(function<void()> printThird) {
        semThird.acquire();
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};