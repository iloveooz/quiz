#include <iostream>

class A {
public:
	virtual void f() { std::cout << 'A' << std::endl; }
};

class B : public A {
public:
	virtual void f() { std::cout << 'B' << std::endl; }
};

void g(A a) { a.f(); }

int main() {
	B b;
	g(b);

	system("pause");
	return 0;
}

// not ABB, not ABA, A only
// hasn't constructors
