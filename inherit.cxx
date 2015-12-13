#include<iostream>

using namespace std;

class A{
      int a; 
    public:
 
     virtual void disp()
     {
        cout<< "a=" << a << "\n" ; 
     }   
};

class B:virtual public A
{
      int x; 
    public:
 
     /*void disp()
     {
        cout<< "x=" << x << "\n" ; 
     }*/   
};

class C:public A
{
      int y; 
    public:
 
     /*void disp()
     {
        cout<< "y=" << y << "\n" ; 
     }*/   
};

class D:public B,public C
{
      int c; 
    public:
     D(){c=0;}    
 
     /*void  disp()
     {
        cout<< "c=" << c << "\n" ; 
     }*/   
};

int main()
{
  D d1;
  
  d1.disp();

 return 0;
}
