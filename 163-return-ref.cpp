#include <iostream>

class A {
	int _foo = 0;
public:
	int& getFoo() { return _foo; }
	void printFoo() { std::cout << _foo;  }
};

int main() {
	A a;

	auto bar = a.getFoo();
	++bar;

	a.printFoo();

	std::cout << std::endl;
    system("pause");
    return 0;
}

// 0
