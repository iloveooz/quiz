#include <iostream>
#include <vector>

int main() {
	std::vector<char> delimiters = { ",", ";" };
	std::cout << delimiters[0];

	std::cout << std::endl;
    system("pause");
    return 0;
}

// UB
