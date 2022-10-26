//call by refrence
#include<iostream>
using namespace std;

int swapRefrencevar(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a,b;
    cout<<"ENTER A AND B"<<endl;
    cin>>a;
    cin>>b;
    cout<<endl<<"after swaping"<<endl;
    swapRefrencevar(a,b);
    cout<<" a is = "<<a<<endl<<"b is ="<<b<<endl;
    return 0;
}