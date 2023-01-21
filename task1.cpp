#include<iostream>
using namespace std;
void table1(int number);
main()
{
   int table;
   int number;
   cout<<"enter number";
   cin>>number;
   table1(number);
}
void table1(int number)
{
    int table;
     for(int x=1;x<=10;x++)
    {
        table=number*x;
        cout<<number<<"*"<<x<<"="<<table<<endl;
    }
}