#include <iostream>

void f(unsigned int) { std::cout << "u" << std::endl; }
void f(int) { std::cout << "i" << std::endl; }
void f(char) { std::cout << "c" << std::endl; }

int main() {
	char x = 1;
	char y = 2;

	f(x + y);

	system("pause");
	return 0;
}
