#include<iostream>

using namespace std;

class ABC{};

int main()
{
   ABC abc;
   char c;
   cout<<sizeof(abc)<<endl; 
   cout<<sizeof(c)<<" "<<sizeof('c')<<" "<<sizeof(cout)<<endl ;
   return 0;
}
