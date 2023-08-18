#ifndef DELETE_ARRAY_ROWSIZE_H_
#define DELETE_ARRAY_ROWSIZE_H_

void deleteArrayRowSize(int** &arr, int numberOfRows) {
    for (int i = 0; i < numberOfRows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    arr = nullptr; // prevent dangling pointer
}

#endif