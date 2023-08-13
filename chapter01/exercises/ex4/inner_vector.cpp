#include <iostream>
#include <vector>

template <typename T>
T inner_product(const std::vector<T>& a, const std::vector<T>& b) {
    if (a.size() != b.size()) {
        throw std::invalid_argument("Vectors must be of the same size");
    }

    T sum = 0;
    for (std::size_t i = 0; i < a.size(); i++) {
        sum += a[i] * b[i];
    }
    return sum;
}

int main() {
    std::vector<int> a = { 1, 2, 3, 4 };
    std::vector<int> b = { 5, 6, 7, 8 };

    try {
        std::cout << "Inner product of the vectors: " << inner_product(a, b) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }

    return 0;
}
