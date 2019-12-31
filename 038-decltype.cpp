#include <iostream>

int main() {
    int a = 0;
    decltype((a)) b = a;
    b++;

    std::cout << a << b;
	std::cout << std::endl;
    system("pause");
    return 0;
}

// 11
