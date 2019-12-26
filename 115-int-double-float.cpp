#include <iostream>

void foo(int) { std::cout << 'i' << std::endl; }
void foo(double) { std::cout << 'd' << std::endl; }
void foo(float) { std::cout << 'f' << std::endl; }

int main() {
	foo(1.0);
	system("pause");
	return 0;
}
