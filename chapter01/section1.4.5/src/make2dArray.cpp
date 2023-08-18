#include <iostream>
// #include "make2dArray.h"
#include "make2dArrayNoCatch.h"
#include "delete2dArray.h"


int main(int argc, char **argv){
    int **x;
    int rows = 3;
    int cols = 5;
    try
    {
        make2dArrayNoCatch(x,rows,cols);
    }
    catch(bad_alloc)
    {
        std::cerr <<"Could not create x"<< std::endl;
        exit(1);
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
        x[i][j] = i * cols + j; // 
        }
    }

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
        std::cout << x[i][j] << " ";
        }
        std::cout << std::endl;
    }

    delete2dArray(x,rows);
    return 0;
}