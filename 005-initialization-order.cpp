#include <iostream>

struct A {
	A() { std::cout << "A"; }
};

struct B {
	B() { std::cout << "B"; }
};

class C {
public:
	C() : a(), b() {}
private:
	B b;
	A a;
};

int main() {
	C();

	std::cout << std::endl;
    system("pause");
    return 0;
}

// BA - the initialization order of member variables is determined by their order of declaration, not their order on the initialization list
