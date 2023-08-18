#ifndef changeLength1D_H_
#define changeLength1D_H_
#include <algorithm>
template<class T>
void changeLength1D(T*& a, int oldLength, int newLength)
{
   if (newLength < 0)
      throw std::out_of_range("New length must be greater than or equal to 0");

   T* temp = new T[newLength];              // new array
   int number = std::min(oldLength, newLength);  // number to copy
   std::copy(a, a + number, temp);
   delete [] a;                             // deallocate old memory
   a = temp;
}

#endif //changeLength1D_H_