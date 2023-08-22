#include <iostream>

int main() {
    int n;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
        return 1;
    }

    
    unsigned long long factorial = 1;

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    std::cout << "The factorial of " << n << " is " << factorial << std::endl;
    return 0;
}
