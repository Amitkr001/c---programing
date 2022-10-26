//C++ program to find palindrome number
#include<iostream>
using namespace std;

int main()
{

int num, temp, digit, reverse = 0;

    cout<<"Enter any number: \n";
    cin>>num;
      temp=num;
    while (num!=0)
    {
        digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }
    if (temp==reverse)
    {
        cout<<"Number is palindrome \n";

    }
    else
    {
      cout<<"Number is not palindrome \n";
    }

    return 0;
}