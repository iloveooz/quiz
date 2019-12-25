#include <iostream>

int main() {
	char * a = const_cast<char *>("Hello");
	a[4] = '\0';
	std::cout << a << std::endl;

	system("pause");
	return 0;
}
