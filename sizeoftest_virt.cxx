#include<iostream>

using namespace std;

class test{

 void f1(void);
 virtual void f2()=0;
 virtual void f3()=0;
  
};


int main()
{

  cout<<"sizeof(test)="<<sizeof(test)<<"\n";


}
