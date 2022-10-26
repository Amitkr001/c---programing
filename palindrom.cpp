#include<iostream>
using namespace std;

int main()
{

int num,reverse=0,temp,lastdigit;

     //TAKING IMPUT FOR PROGRAM

    cout<<"INTER ANY NUMBER::::--";
    cin>>num;
      temp=num;
    //  logarithem o f program
    while (num!=0)
    {
        lastdigit=num%10;
        reverse=reverse*10+lastdigit;
        num=num/10;
    }
     //ouput of program
  
    if (temp==reverse)
    {
        cout<<"palindrom number";

    }
    else
    {
      cout<<"not palindrom number";
    }

    return 0;
}