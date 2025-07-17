#include<iostream>
#include<cstring>
using namespace std;

class student
{
  private:
            char name[20];
            int age;
            char grade;
  public:
        void setdata(const char* name1,int age1,char grade1);
       
        void getdata()
        {
            cout<<"NAME->"<<name<<endl;
            cout<<"AGE->"<<age<<endl;
            cout<<"GRADE->"<<grade<<endl;
        }
};

void student::setdata(const char* name1,int age1,char grade1)
{
    strcpy(name,name1);
    age = age1;
    grade = grade1;
}



int main()
{
    student st;

    st.setdata("omkar",12,'C');
    st.getdata();
    cout<<"PROGRAM EXECUTED->>";
    return 0;
    
}