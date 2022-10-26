#include<iostream>
using namespace std;

int main()
{
    int num,i;
    //imput from user
    cout<<"enter any number";
    cin>>num;
    //algoritm for program
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            cout<<"non prime number";
            break;

        }
    }

       if(i==num)
       {
           cout<<"prime number"<<i;
       }

    return 0;
}