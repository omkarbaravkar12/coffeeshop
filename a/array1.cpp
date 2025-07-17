#include<iostream>
using namespace std;

class student
{
    int physics;
    int maths;
    int chemistry;
    int science;
    int english;
               public:
                     void getuserdata()
                     {
                        cout<<"Enter physics marks->"<<endl;
                        cin>>physics;
                        cout<<"Enter maths marks->"<<endl;
                        cin>>maths;
                        cout<<"Enter chemistry marks->"<<endl;
                        cin>>chemistry;
                        cout<<"Enter science marks->"<<endl;
                        cin>>science;
                        cout<<"Enter english marks->"<<endl;
                        cin>>english;
                     }

                     void displayuserdata()
                     {
                        cout<<"Physics->"<<physics<<endl;
                        cout<<"Maths->"<<maths<<endl;
                        cout<<"Chemistry->"<<chemistry<<endl;
                        cout<<"Science->"<<science<<endl;
                        cout<<"English->"<<english<<endl;
                     }
};

int main()
{
    student st[5];

    for(int i=0;i<5;i++)
    { 
        cout<<"_______________________________________________________"<<endl;
        st[i].getuserdata();
    }

    for(int i=0;i<5;i++)
    {
        st[i].displayuserdata();
        cout<<"_______________________________________________________"<<endl;
    }

    return 0;
}