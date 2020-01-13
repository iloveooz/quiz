#include <iostream>

int a = 1;

int main() {
    auto f = [](int b) { return a + b; };

    std::cout << f(4);

	std::cout << std::endl;
    system("pause");
    return 0;
}

// 5
