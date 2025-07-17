#include<iostream>
using namespace std;

int add(int x, int y)
{
    return x+y;
}

int add(int a,int b,int c)
{
    return a+b+c;
}

int add(int z)
{
    return z;
}

int main()
{
    cout<<"The addtion of two arguments-> "<<add(5,7)<<endl;
    cout<<"The addtion of two arguments-> "<<add(5,7,3)<<endl;
    cout<<"The addtion of two arguments-> "<<add(5)<<endl;
    return 0;
}