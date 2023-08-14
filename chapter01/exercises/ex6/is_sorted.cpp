#include <iostream>

template <typename T>
bool is_sorted(const T* a, std::size_t n) {
  for (std::size_t i = 1; i < n; ++i) {
    if (a[i - 1] > a[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  if (is_sorted(arr, sizeof(arr) / sizeof(arr[0]))) {
    std::cout << "Array is sorted!\n";
  } else {
    std::cout << "Array is not sorted!\n";
  }

  int arr2[] = {5, 3, 2, 4, 1};
  if (is_sorted(arr2, sizeof(arr2) / sizeof(arr2[0]))) {
    std::cout << "Array is sorted!\n";
  } else {
    std::cout << "Array is not sorted!\n";
  }
  
  return 0;
}
