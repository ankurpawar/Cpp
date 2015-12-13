#include<iostream>
#include"template2.h"

using namespace std;

int main()
{
   arr1d<char> arr1;   
   for(char i=0;i<5;i++) 
    arr1.a1[i]=i*2; 

   cout<< "sum is "<<arr1.sum()<<endl;
   return 0;
}
