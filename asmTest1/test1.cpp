#include<iostream>

using namespace std;

extern "C" int testFunction();

int main()
{
    cout<<"ASM returned "<<testFunction();
    return 0;
}
