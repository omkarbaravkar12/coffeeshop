//Write a virtual inheritance program or code and take one class as parent class and four child class and inherit
//there properties write a calculation and display code using appropriate data types and do multiplication addition
//division and substraction 

#include<iostream>
using namespace std;


class Method
{
    public:
    virtual int calculate() = 0;
    virtual void display() = 0;
};

class addition : virtual public Method
{
  protected:
    int num1;
    int num2;
    public:
        addition(int n1,int n2)
        {
            num1 = n1;
            num2 = n2;
        }
     
        int calculate() override
        {
            int total;
            total = n1 + n2;
            return total;
        }

        void display()
        {
            cout<<"Addition of number is "<<calculate(num1,num2)<<endl;
        }
};

class substraction : virtual public Method
{
    protected:
        int num1;
        int num2;

        public:
            substraction(int n1,int n2) 
            {
                num1 = n1;
                num2 = n2;
            }

            int calculate() override
            {

            }
}
