#include <iostream>

template <typename T>
int count(const T* a, int n, const T& value) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == value) {
            count++;
        }
    }
    return count;
}

int main() {
    int a[] = { 1, 2, 3, 4, 3, 5, 3, 3 };
    int n = sizeof(a) / sizeof(a[0]);
    int value = 3;

    std::cout << "Number of occurrences of " << value << " in the array: " << count(a, n, value) << std::endl;

    return 0;
}
