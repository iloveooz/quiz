#include <iostream>

struct X {
    X() { std::cout << "a"; }
    X(const X& x) { std::cout << "b"; }
    const X &operator = (const X &x) {
        std::cout << "c";
        return *this;
    }
};

int main() {
    X x;
    X y(x);
    X z = y;

    z = x;

    std::cout << std::endl;
    system("pause");
    return 0;
}

// abbc
// The difference between 'X y(x)' and 'X z = y' is not that the first calls the copy constructor, 
// and the second calls the copy assignment operator
// Both our cases use the copy constructor
