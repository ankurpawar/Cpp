#include<iostream>

using namespace std;

template<class T>
T maxofone(T a1,T b1)
{
   T result;
  result = a1>b1?a1:b1;
  return result;
}



int main()
{
   cout<<"hello world to remplate"; 
   long a=1,b=3,i;
   i = maxofone(3,5);
   cout<<"greater is "<<i<<endl;
   return 0;
}
