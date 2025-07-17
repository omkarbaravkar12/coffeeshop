#include<iostream>
using namespace std;

class emp
{
    int id;
    static int count;
    public: 
            void setdata(void)
            {
                cout<<"Enter the id"<<endl;
                cin>>id;
            }

            void getdata(void)
            {
                cout<<"The id of empoyee is "<<id<<endl;
            }
};

 int emp::count;
 
int main()
{
    emp em;

    em.setdata();
    em.setdata();
    return 0;
}