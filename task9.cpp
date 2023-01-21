#include<iostream>
using namespace std;
void printpercent(int num);
main()
{
    int num;
    int total;
    cout<<"enter your number";
    cin>>num;
    printpercent(num);

}
void printpercent(int num)
{
    float value=0;
    float value1=0;
    float value2=0;
    float value3=0;
    float value4=0;
    float value5=0;
    float value6=0;
    float sum=0;
    float num1=0;
    float num2=0;
    float num3=0;
    float num4=0;
    float num5=0;
    for(int x=1; x<=num;x++)
    {
        cout<<"enter value";
        cin>>value;
        if(value>=0 && value<=199)
        {
            num1+=1;
        }
        else if(value>=200 && value<=399)
        {
            num2+=1;
        }
        else if(value>=400 && value<=599)
        {
            num3+=1;
        }
        else if(value>=600 && value<=799)
        {
            num4+=1;
        }
        else
        {
            num5+=1;
        }
    }
        value2=(num1/num)*100;
        value3=(num2/num)*100;
        value4=(num3/num)*100;
        value5=(num4/num)*100;
        value6=(num5/num)*100;
        cout<<value2<<"%"<<endl;
        cout<<value3<<"%"<<endl;
        cout<<value4<<"%"<<endl;
        cout<<value5<<"%"<<endl;
        cout<<value6<<"%"<<endl;
        
}