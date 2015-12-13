#include<iostream>
using namespace std;
int main()
{
	volatile const int a = 2;
	int *ptr;
	ptr = (int *)&a;
	*ptr = 14;
	cout<<"a="<<a<<",*ptr"<<*ptr<<"\n";
	return 0;
}
