#include<iostream>
using namespace std;
int per(int a, int b)
{
    return a*b/100;
}

int main()
{
    int a,b;
    cout<<"Enter the value";
    cin>>a;
    cout<<"enter the percent of number";
    cin>>b;

    cout<<b <<"percent of "<<a <<"is "<<per(a,b);
}