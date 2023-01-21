#include<iostream>
using namespace std;
void fibo(int num);
main()
{
    int number;
    cout<<"enter number";
    cin>>number;
    fibo(number);
}
void fibo(int number)
{
    int previous=0;
    int current=1;
    int next;
    cout<<previous<<","<<current<<",";
    for(int counter=3; counter<=number; counter++)
    {
        next=previous+current;
        cout<<next<<",";
        previous=current;
        current=next;
    }
}