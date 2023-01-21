#include<iostream>
using namespace std;
int value(int number);
main()
{
    int number;
    int digit;
    cout<<"enter number";
    cin>>number;
    digit=value(number);
    cout<<""<<digit;
}
  int value(int number)
{
    int add1=0;
    int add=0;
    int x;
    int y;
    while(number>=0)
    {
      x=number%10;
      y=number/10;
      add=add+x;
      number=y;
      if(number<9)
      {
        add1=number;
        return add+add1;
      }
    }
    return add;
}