#include <iostream>
#include <vector>

template <typename T>
T inner_product(const T* a, const T* b, int n) {
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i] * b[i];
    }
    return sum;
}

int main() {
    int a[] = { 1, 2, 3, 4 };
    int b[] = { 5, 6, 7, 8 };
    int n = sizeof(a) / sizeof(a[0]);

    std::cout << "Inner product of the arrays: " << inner_product(a, b, n) << std::endl;

    return 0;
}
