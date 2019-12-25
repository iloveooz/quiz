#include <iostream>

class A {
public:
	A() { std::cout << 'a' << std::endl; }
	~A() { std::cout << 'A' << std::endl; }
};

class B : public A {
public:
	B() { std::cout << 'b' << std::endl; }
	~B() { std::cout << 'B' << std::endl; }
};

int main() {
	B b;
	system("pause");
	return 0;
}

// abBA
