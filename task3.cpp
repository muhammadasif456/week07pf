#include<iostream>
using namespace std;
int totaldigit(int value);
main()
{
    int value;
    int total1;
    cout<<"enter a number";
    cin>>value;
    total1=totaldigit(value);
    cout<<total1<<"digits";
}
int totaldigit(int value)
{
 int cout=0;
 
while(value>0)
{
    cout=cout+1;
    value=value/10;
}   
return cout;
}