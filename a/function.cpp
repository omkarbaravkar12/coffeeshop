#include<iostream>

using namespace std;

int fun(int a,int b)
{
    int c = a + b;
}

int swap(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int swappointer(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 4;
    int b = 5;
    cout<<"The addition is"<<fun(5,5)<<endl;
    cout<<"Value of a is"<<a<<endl<<"Value of b is"<<b<<endl;
    cout<<"Below swap will not run!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    swap(4,5);
    cout<<"Value of a is"<<a<<endl<<"Value of b is"<<b<<endl;
    swappointer(&a,&b);
    cout<<"This will work"<<endl;
    cout<<"Value of a is"<<a<<endl<<"Value of b is"<<b<<endl;

    return 0;
}