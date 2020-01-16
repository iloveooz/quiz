#include <iostream>
#include <vector>

int main() {
	for (int i = 0; i < 3; i++)
		std::cout << i;

	for (int i = 0; i < 3; ++i)
		std::cout << i;

	std::cout << std::endl;
	system("pause");
	return 0;
}

// 012012
