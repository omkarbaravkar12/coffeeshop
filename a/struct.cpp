#include<iostream>

using namespace std;

struct teachers
{
    int phone;
    int rno;
    float salary;
};



int main()
{
    struct teachers t;

    t.phone = 988634567;
    t.rno = 12;
    t.salary = 22,000;

    cout<<"Name is ->"<<t.phone<<endl;
    cout<<"roll no is ->"<<t.rno<<endl;
    cout<<"salary ->"<<t.salary<<endl;

    cout<<"-----------------------------------------------PROGRAM ENDED------------------------------------------------"<<endl;

    

    return 0;
}