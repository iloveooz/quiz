#include <functional>
#include <iostream>

template <typename Type>
void call_with(std::function<void(Type)> f, Type val) {
    f(val);
}

int main() {
    auto print = [] (int x) { std::cout << x; };
    call_with(print, 42);
    system("pause");
    return 0;
}

// compilation error

/*
#include <functional>
#include <iostream>

template <typename Type>
void call_with(std::function<void(Type)> f, Type val) {
    f(val);
}

int main() {
    auto print = [] (int x) { std::cout << x; };
    call_with<int>(print, 42);
    system("pause");
    return 0;
}
*/

// no compilation error
