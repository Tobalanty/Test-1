#include <iostream>

int readNumber() {
    int a;

    std::cout << "Input integer: " << std::endl;
    std::cin >> a;

    return a;
}

void writeAnswer() {

    int a, b;

    a = readNumber();
    b = readNumber();
    std::cout << "a + b = " << a + b << std::endl;

}