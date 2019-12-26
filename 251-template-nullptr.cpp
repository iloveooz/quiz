#include <iostream>

template <class T>
void f(T) { std::cout << 1; }

template <>
void f(int *) { std::cout << 2; }

template <class T>
void f(T*) { std::cout << 3; }


int main() {
	int* p = nullptr;

	f(p);

	system("pause");
	return 0;
}

// 3
