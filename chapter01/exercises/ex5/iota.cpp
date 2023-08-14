#include <iostream>
template <class T>
void iota(T* a, int n, const T& value)
{// Set a[i] = a[i] + value, 0 <= i < n.
   for (int i = 0; i < n; i++)
      a[i] += value;
}

int main(){
    int a[] = { 1, 2, 3, 4 };
    iota(a,3,1);
    for (size_t i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        std::cout << "a[" <<i<<"]= " <<a[i]<<std::endl;
    }
    
    
    return 0;
}