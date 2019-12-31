#include <iostream>

struct A {
    A() { foo(); }
    virtual ~A() { foo(); }
    virtual void foo() { std::cout << "1"; }
    void bar() { foo(); }
};

struct B : public A {
    virtual void foo() { std::cout << "2"; }
};

int main() {
    B b;
    b.bar();

    system("pause");
    return 0;
}

// 121
// even though foo() is virtual, it is not considered 
// to be so during the execution of constructors and destructors
