#include<iostream>

using namespace std;

class sample{

 int x;
 int y;
 
 public:

 void inline get()
 {
    cout<<"Enter x and y\n";
    cin>>x>>y; 
 }

 void inline display()
 {
   cout<<x<<" "<<y<<"\n";
 }


};

int main()
{
  sample s1; 

  s1.get();
  s1.display();
  
  return 0;
}
