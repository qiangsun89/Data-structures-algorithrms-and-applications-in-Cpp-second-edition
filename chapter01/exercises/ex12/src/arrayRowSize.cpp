#include <iostream>
#include "make2dArrayRowSize.h"
#include "deleteArrayRowSize.h"

int main(int argc, char **argv){
    int numberOfRows = 3;
    int rowSizes[] = {2, 4, 6};

    int** myArray;
    make2dArrayRowSize(myArray, numberOfRows, rowSizes);

    for (int i = 0; i < numberOfRows; i++) {
        for (int j = 0; j < rowSizes[i]; j++) {
            myArray[i][j] = i * rowSizes[i] + j;  // initialization
        }
    }

    // print
    for (int i = 0; i < numberOfRows; i++) {
        for (int j = 0; j < rowSizes[i]; j++) {
            std::cout << myArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // delete
    deleteArrayRowSize(myArray, numberOfRows);
    return 0;
}