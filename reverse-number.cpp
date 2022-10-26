#include<iostream>
using namespace std;

int main()
{

int num,reverse=0,temp,lastdigit;

//TAKING IMPUT FOR PROGRAM

    cout<<"INTER ANY NUMBER::::--";
    cin>>num;
    //  logarithem o f program
    while (num!=0)
    {
        lastdigit=num%10;
        reverse=reverse*10+lastdigit;
        num=num/10;
    }
    
      cout<<"reverse number"<<reverse;
    

    return 0;
}