#include <algorithm>
#include <iostream>

int main() {
	int x = 10;
	int y = 10;

	const int& max = std::max(x, y);
	const int& min = std::min(x, y);

	x = 11;
	y = 9;

	std::cout << max << min << std::endl;

	system("pause");
	return 0;
}

// returns the first argument when the arguments are equivalent
// both max and min are bount to x
