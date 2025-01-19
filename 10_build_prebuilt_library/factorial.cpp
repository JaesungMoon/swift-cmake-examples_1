#include <iostream>

int factorial(int x) {
    std::cout << "x = " << x << std::endl;
    if (x <= 0) {
        return 1;
    } else {
        return x * factorial(x - 1);
    }
}
