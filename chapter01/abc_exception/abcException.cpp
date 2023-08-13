#include<iostream>

int abc(int a, int b, int c)
{
   if (a <= 0 || b <= 0 || c <= 0)
          throw "All parameters should be > 0";
   return a + b * c;
}

int main()
{
  try {std::cout << abc(2,0,4) << std::endl;}
  catch (const char* e)
      {
         std::cout << "The parameters to abc were 2, 0, and 4" << std::endl;
         std::cout << "An exception has been thrown" << std::endl;
         std::cout << e << std::endl;
         return 1;
      }
   return 0;
}