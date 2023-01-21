#include<iostream>
using namespace std;
int digit(int sum);
main()
{
    int sum;
    int sum1;
    cout<<"enter a number";
    cin>>sum;
    sum1=digit(sum);
    cout<<sum1;

}
int digit(int sum)
{
    int div;
    int x=0;
    while(sum>0)
    {
        sum=sum/10;
        x++;
    }
    return x;
}