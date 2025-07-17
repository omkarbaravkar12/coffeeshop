//write a program to take three marks from user and perform average and display grade of it
#include<iostream>
using namespace std;

class studentgrade
{
    private:
    string name;
    float marks[3];

    public:

    studentgrade(string n,int m1,int m2,int m3)
    {
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    float calculateaverage()
    {
        return (marks[0] + marks[1] + marks[2]) / 3.0;
    }

    char getgrade()
    {
        float avg = calculateaverage();
        if(avg >= 90)
        {
            return 'A';
        }
        else if(avg >= 80)
        {
            return 'B';
        }
        else if(avg >= 70)
        {
            return 'C';
        }
        else
        {
            return 'D';
        }
    }

    void display()
    {
        cout<<"Student marks-> "<<name<<endl;
        cout<<"Student average marks-> "<<calculateaverage()<<endl;
        cout<<"Student Grade-> "<<getgrade()<<endl;
    }

       
};

int main()
{

    string name;
    float m1,m2,m3;

    cout<<"Enter the student name-> "<<endl;
    cin>>name;
    cout<<"Enter the student marks-> "<<endl;
    cin>>m1>>m2>>m3;

    studentgrade stg(name,m1,m2,m3);
    stg.display();

    
}

