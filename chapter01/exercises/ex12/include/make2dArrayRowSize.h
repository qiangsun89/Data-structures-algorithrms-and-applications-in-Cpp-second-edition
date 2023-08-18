#ifndef make2dArrayRowSize_
#define make2dArrayRowSize_

using namespace std;

template <class T>
void make2dArrayRowSize(T ** &x, int numberOfRows, int *RowSize)
{// Create a two-dimensional array.

   // create pointers for the rows
   x = new T * [numberOfRows];
      
   // get memory for each row
   for (int i = 0; i < numberOfRows; i++)
      x[i] = new T [RowSize[i]];
}

#endif