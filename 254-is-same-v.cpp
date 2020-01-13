#include <iostream>
#include <type_traits>

int main() {
	std::cout << std::is_same_v<void(int), void(const int)>;
	std::cout << std::is_same_v<void(int *), void(const int*)>;

	std::cout << std::endl;
    system("pause");
    return 0;
}

// 10
