#include <iostream>
#include <algorithm>

template <typename T>
void changeLength2D(T**& arr, int oldRows, int oldCols, int newRows, int newCols) {
    if (newRows < 0 || newCols < 0) {
        throw std::out_of_range("New rows and columns must be greater than or equal to 0");
    }

    T** newArr = new T*[newRows];
    for (int i = 0; i < newRows; i++) {
        newArr[i] = new T[newCols];
    }

    int rowsToCopy = std::min(oldRows, newRows);
    int colsToCopy = std::min(oldCols, newCols);

    for (int i = 0; i < rowsToCopy; i++) {
        for (int j = 0; j < colsToCopy; j++) {
            newArr[i][j] = arr[i][j];
        }
    }

    for (int i = 0; i < oldRows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    arr = newArr;
}

int main() {
    int oldRows = 2, oldCols = 3;
    int newRows = 3, newCols = 4;

    int** arr = new int*[oldRows];
    for (int i = 0; i < oldRows; i++) {
        arr[i] = new int[oldCols]{i * oldCols, i * oldCols + 1, i * oldCols + 2}; // 示例初始化
    }

    std::cout << "Old array:\n";
    for (int i = 0; i < oldRows; i++) {
        for (int j = 0; j < oldCols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    changeLength2D(arr, oldRows, oldCols, newRows, newCols);

    std::cout << "New array:\n";
    for (int i = 0; i < newRows; i++) {
        for (int j = 0; j < newCols; j++) {
            std::cout << arr[i][j] << " "; // 注意：如果新大小大于旧大小，则新添加的元素将是未初始化的
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < newRows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
