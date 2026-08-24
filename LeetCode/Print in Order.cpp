#include <future>

class Foo {
private:
    std::promise<void> p1;
    std::promise<void> p2;

public:
    Foo() {}

    void first(function<void()> printFirst) {
        printFirst();
        p1.set_value();
    }

    void second(function<void()> printSecond) {
        p1.get_future().wait();
        printSecond();
        p2.set_value();
    }

    void third(function<void()> printThird) {
        p2.get_future().wait();
        printThird();
    }
};

/* The `<future>` header provides standard library facilities for asynchronous synchronization and passing results between threads.

In this specific code, `<future>` is required because it defines **`std::promise`** and **`std::future`**, which act as a one-time signaling channel between independent threads:

* **`std::promise<void>`**: Acts as the *sender / producer*. Call `p1.set_value()` to send a completion signal without passing any physical data.
* **`std::future<void>`**: Acts as the *receiver / consumer*. Calling `p1.get_future().wait()` forces the receiver thread to block execution until `p1.set_value()` is called by the other thread.

Without `#include <future>`, the compiler will throw errors because `std::promise` and `get_future()` won't be defined. */
