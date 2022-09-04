#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    try {
        throw "test exception";
    } catch (int e) {
        std::cout << "Caught exception: " << e << std::endl;
    }
    return 0;
}
