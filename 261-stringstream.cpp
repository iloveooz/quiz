#include <iostream>
#include <sstream>

int main() {
	std::stringstream ss("a");
	std::cout << ss.str();
	ss << "b";
	std::cout << ss.str();

	system("pause");
	return 0;
}

// ab
