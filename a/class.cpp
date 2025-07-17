#include<iostream>
using namespace std;

class omkar
{
    private:

    int a,b,c;

    public:

    int d,e;

    void setdata(int a1,int b1,int c1);
    void getdata()
    {
      cout<<"Value of a is ->"<<a<<endl;
      cout<<"Value of b is ->"<<b<<endl;
      cout<<"Value of c is ->"<<c<<endl;
      cout<<"Value of d is ->"<<d<<endl;
      cout<<"Value of e is ->"<<e<<endl;
    }

    void publicsetdata(int d1,int e1);
    void publicgetdata()
    { 
       cout<<"Value of d is->"<<d<<endl;
       cout<<"Value of e is->"<<e<<endl;
    }
   
};

void omkar::setdata(int a1,int b1,int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
void omkar::publicsetdata(int d1,int e1)
{
    
        d = d1;
        e = e1;
    
}

int main()
{
    omkar me;
   
    me.setdata(4,5,6);
    me.getdata();

    me.publicsetdata(7,8);
    me.publicgetdata();
    
    cout<<"PROGRAM EXECUTED";
    return 0;
}