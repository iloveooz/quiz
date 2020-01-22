#include <iostream>
#include <typeinfo>

struct A {};

int main() {
	std::cout << (&typeid(A) == &typeid(A));

	std::cout << std::endl;
	system("pause");
	return 0;
}

// 1
