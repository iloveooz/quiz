#include <iostream>

void f(unsigned int) { std::cout << "u"; }
void f(int) { std::cout << "i"; }
void f(char) { std::cout << "c"; }

int main() {
    char x = 1;
    char y = 2;

    f(x + y);

	std::cout << std::endl;
    system("pause");
    return 0;
}

// i or the program is unspecified
