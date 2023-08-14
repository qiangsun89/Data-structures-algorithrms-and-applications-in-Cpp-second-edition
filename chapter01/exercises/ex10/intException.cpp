#include <iostream>
#include <stdexcept>

template <typename T>
T abc(T a, T b, T c) {
  if (a < 0 && b < 0 && c < 0) {
    throw 1;
  }
  if (a == 0 && b == 0 && c == 0) {
    throw 2;
  }
  return a + b * c;
}

int main() {
  try {
    std::cout << "Result: " << abc(3, 2, 4) << std::endl; // Output: Result: 11
    std::cout << "Result: " << abc(-1, -2, -3) << std::endl; // Exception: 1
  } catch (int e) {
    std::cout << "Exception: " << e << std::endl;
  }

  try {
    std::cout << "Result: " << abc(0, 0, 0) << std::endl; // Exception: 2
  } catch (int e) {
    std::cout << "Exception: " << e << std::endl;
  }

  return 0;
}
