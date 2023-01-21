#include<iostream>
using namespace std;
int checker(int number, int digit);
main()
{
    int number;
    int digit;
    int sum;
    cout<<"enter the number";
    cin>>number;
    cout<<"enter the digit";
    cin>>digit;
    sum=checker(number,digit);
    cout<<sum;
}
int checker(int number, int digit)
{
    int add=0;
    int y;
    while(number>0)
    {
    y=number%10;
    if(y==digit)
    {
        add++;   
    }
    number/=10;
    }
    return add;
}