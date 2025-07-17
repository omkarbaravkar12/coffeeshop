//create a class for a car defing it brand model and year
#include<iostream>
#include<cstring>
using namespace std;

class car
{
    private:
     char brand[20];
     int model;
     int year;

     public:
     void setdata(const char* b,int m,int y);
     void getdata()
     {
        cout<<"Brand->"<<brand<<endl<<"Mode->"<<model<<endl<<"Year->"<<year<<endl;
     }
};

void car::setdata(const char* b,int m,int y)
{
   strcpy(brand,b);
    model = m;
    year = y;
}

int main()
{
    car c;
    c.setdata("tata",2005,2025);
    c.getdata();
    return 0;
}