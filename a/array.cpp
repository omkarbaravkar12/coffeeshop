#include<iostream>

using namespace std;

class A
{
    int id;
    int salary;
    public:
            void getdata(void)
            {
                salary = 500;
                cout<<"Enter the id"<<endl;
                cin>>id;
            }

            void printdata(void)
            {
                cout<<"The id is "<<id<<endl;
            }
};

int main()
{
    A techk[4];

    for(int i=0;i<4;i++)
    {
        techk[i].getdata();
        techk[i].printdata();
    }
    return 0;
}