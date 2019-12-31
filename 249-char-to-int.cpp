#include <iostream>

int main() {
	int a = '0';

	char const& b = a;
	std::cout << b;
	a++;
	std::cout << b;

	std::cout << std::endl;
    system("pause");
    return 0;
}

// 00
