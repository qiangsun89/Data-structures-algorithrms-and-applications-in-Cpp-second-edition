#include <iostream>

template<typename InputIt, typename T, typename BinaryOperation = std::plus<>>
T accumulate(InputIt first, InputIt last, T init, BinaryOperation op = BinaryOperation()) {
    for (; first != last; ++first) {
        init = op(init, *first);
    }
    return init;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int sum = accumulate(numbers, numbers + 5, 0); // 使用默认的加法操作
    std::cout << "Sum is: " << sum << '\n';

    int product = accumulate(numbers, numbers + 5, 1, std::multiplies<int>()); // 使用乘法操作
    std::cout << "Product is: " << product << '\n';

    return 0;
}
