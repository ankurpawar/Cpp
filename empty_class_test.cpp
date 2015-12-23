#include<iostream>

using namespace std;

class ABC{};
struct S{};

int main()
{
	ABC abc;
	S s1;
	char c;

	cout<<"Size of class ABC is "<<sizeof(abc)<<endl;
	cout<<"Size of struct S is "<<sizeof(s1)<<endl;
	cout<<sizeof(c)<<endl;
	cout<<sizeof('c')<<endl;
	return 0;
}
