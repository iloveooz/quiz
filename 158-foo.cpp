#include <iostream>
#include <vector>

struct Foo {
	Foo() { std::cout << 'a' << std::endl; }
	Foo(const Foo&) { std::cout << 'b' << std::endl; }
};

int main() {

	std::vector<Foo> bar(5);

	system("pause");
	return 0;
}

// call default constuctor
