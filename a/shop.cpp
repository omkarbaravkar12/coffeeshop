#include<iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

    public:
        void initcounter(void)
        {
            counter = 0;
        }
        void setprice(void);
        void displayprice(void);
};

void shop :: setprice(void)
{
    cout<<"Enter id of item->"<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter price of your item->"<<endl;
    cin>>itemprice[counter];
    counter ++;
}

void shop :: displayprice(void)
{
    for ( int i = 0; i < counter; i++)
    {
        cout<<"The price of item is"<<itemid[i]<<"is"<<itemprice[i]<<endl;
    }
    
}


int main()
{
    shop sh;

    sh.setprice();
    sh.setprice();
    sh.setprice();
    sh.displayprice();
    sh.initcounter();

    return 0;
}