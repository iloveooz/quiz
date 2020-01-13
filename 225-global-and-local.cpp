#include <iostream>

struct X {
	X() { std::cout << "1"; }
	X(const X&) { std::cout << "3"; }
	~X() { std::cout << "2"; }

	void foo() { std::cout << "4"; }
} object;

int main() {
	X(object);
	object.foo();

	std::cout << std::endl;
    system("pause");
    return 0;
}

// 11422
