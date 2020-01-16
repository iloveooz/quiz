#include <iostream>
#include <vector>

int main() {
	int i = 1;
	do {
		std::cout << i;
		i++;
		if (i < 3) 
			continue;
	} while (false);

	std::cout << std::endl;
	system("pause");
	return 0;
}

// 1
