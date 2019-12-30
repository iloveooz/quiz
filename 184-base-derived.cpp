#include <iostream>

struct Base {
    void f(int) { std::cout << "i" << std::endl; }
};

struct Derived : Base {
    void f(double) { std::cout << "d" << std::endl; }
};

int main() {
    Derived d;
    int i = 0;

    d.f(i);

    system("pause");
    return 0;
}

// d
