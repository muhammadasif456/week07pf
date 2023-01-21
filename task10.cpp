#include<iostream>
using namespace std;
int lily(int age,int wash,int price);
main()
{
    int age;
    int wash;
    int price;
    int total;
    int x=0;
    int y=0;
    int z=0;
    cout<<"enter the age of lily";
    cin>>age;
    cout<<"enter the price of washing machine";
    cin>>wash;
    cout<<"enter the price of toy";
    cin>>price;
     x=total-wash;
     y=wash-total;
    total=lily(age,wash,price);
    if(total>wash)
    {
        cout<<"Yes!"<<endl;
        cout<<x;
    }
    if(total<wash)
     {
        cout<<"No!";
        cout<<y;
     }
    
}
   int lily(int age, int wash, int price)
{
    int total1=0;
    int total2=0;
    int sum1=0;
    int sum2=0;
    int y=0;
    for(int x=1; age>=x; x++)
    {
        if(x%2==0)
        {
            y+=1;
            sum1+=10*y;
        }
        else if(x%2==1)
        {
            sum2=sum2+1;
        }
    }
    total1=sum1-y;
    total2=sum2*price;
    return total1+total2;
    
}