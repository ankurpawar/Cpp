#include"template2.h"
template<class T>
T arr1d<T>::sum(void)
{
   T result = 0;
   for(int i=0;i<5;i++)
     result += a1[i];
   
   return result;
}

template class arr1d<int>;
template class arr1d<float>;
template class arr1d<double>;
template class arr1d<char>;
