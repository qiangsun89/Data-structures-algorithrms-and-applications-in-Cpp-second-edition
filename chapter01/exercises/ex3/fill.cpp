#include <iostream>

template <class T>
void fill(T* a, int start, int end, const T& value)
{// Set a[start:end-1].
   for (int i = start; i < end; i++)
      a[i] = value;
}

int main() {
    int a[] = { 1, 2, 3, 4, 3, 5, 3, 3 };
    int n = sizeof(a) / sizeof(a[0]);
    fill(a,1,5,6);

    for (size_t i = 0; i < n; i++)
    {
        std::cout<<"a["<<i <<"]= "<< a[i] << std::endl;
    }
    

    return 0;
}
