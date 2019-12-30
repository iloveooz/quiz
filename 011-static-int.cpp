#include <iostream>

int a;

int main() {

    std::cout << a << std::endl;

    system("pause");
    return 0;
}

// 0
// Since 'a' has static storage duration and no
// inizializer, it is guaranteed to be zero-initialized.
// Had 'a' been defined as a local non-static variable
// inside 'main()', this would not have happened.
