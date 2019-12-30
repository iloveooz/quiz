#include <iostream>

struct Base {
    virtual int f() = 0;
};

int Base::f() {
    return 1;
}

struct Derived : Base {
    int f() override;
};

int Derived::f() {
    return 2;
}

int main()
{
    Derived object;

    std::cout << object.f();
    std::cout << static_cast<Base &>(object).f() << std::endl;

    system("pause");
    return 0;
}
