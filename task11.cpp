#include<iostream>
using namespace std;
int age(int money, int year);
main()
{
    int money;
    int year;
    int total;
    float total1;
    cout<<"enter money";
    cin>>money;
    cout<<"enter year";
    cin>>year;
    total=age(money,year);
    total1=money-total;
    if(money>total)
    {
        total1=money-total;
        cout<<"Yes! he will live carefully in his life"<<total1;
    }
    else if(total>money)
    {
        total1=total-money;
        cout<<"No! he will need these dollars"<<total1;
    }
    
}
int age(int money,int year)
{
    int value=0;
    int age=18;
    int sum=0;
    int value1=0;
    int age1=18;
    for(int x=1800;year>=x;x++ )
    {
        
        if(x%2==0)
        {
            value+=12000;
        }
        else if(x%2==1)
        {
            value1=12000+(50*age1);
        }
        age1+=1;
    }
    sum=value+value1;
    return sum;

}