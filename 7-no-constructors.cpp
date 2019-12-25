#include <iostream>
class A {
public:
	void f() { std::cout << 'A' << std::endl; }
};

class B : public A {
public:
	void f() { std::cout << 'B' << std::endl; }
};

void g(A& a) { a.f(); }

int main() {
	B b;
	g(b);

	system("pause");
	return 0;
}

// no constructors
// reference!
// not virtual function in A!
