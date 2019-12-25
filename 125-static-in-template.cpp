#include <iostream>

template <class T>
void f(T) {
	static int i = 0;
	std::cout << ++i << std::endl;
}

int main() {
	f(1);
	f(1.0);
	f(1);

	system("pause");
	return 0;
}

// 1 - call for int
// 1 - call for double
// 2 - call for int
