#include<iostream>
using namespace std;
int gcd(int num1, int num2);
int lcd(int num1,int num2, int gcd1);
main()
{
    int num1;
    int num2;
    int gcd1;
    int digit;
    int digit1;
    cout<<"enter value 1"<<endl;
    cin>>num1;
    cout<<"enter value2"<<endl;
    cin>>num2;
    digit=gcd(num1,num2);
    cout<<"GCD is.."<<digit<<endl;
    gcd1=digit;
    digit1=lcd(num1,num2,gcd1);
    cout<<"lcd is..."<<digit1;
}
 int gcd(int num1, int num2)
{
    int gcd;
    for(int count=1; count<num1;count++)
    {
        if(num1%count==0 && num2%count==0)
        {
            gcd=count;
        }
    }
    return gcd;
}
int lcd(int num1, int num2,int gcd)
{
    int value1=0;
    int value2=0;
    value1=num1*num2;
    value2=value1/gcd;
    return value2;
}