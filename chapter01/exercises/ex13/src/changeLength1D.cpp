#include <iostream>
#include "changeLength1D.h"

int main() {
    int oldLength = 5;
    int newLength = 8;
    int* arr = new int[oldLength]{1, 2, 3, 4, 5};

    std::cout << "Old array: ";
    for (int i = 0; i < oldLength; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    changeLength1D(arr, oldLength, newLength);

    std::cout << "New array: ";
    for (int i = 0; i < newLength; i++) {
        std::cout << arr[i] << " "; // notice：if newLength > oldLength，new elements no initialization
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}