template <class T>
int mismatch(T* a, T* b, int n)
{// Return smallest i such that a[i] != b[i].
 // Return n if no such i.
   for (int i = 0; i < n; i++)
      if (a[i] != b[i])
         return i;

   // no mismatch
   return n;
}