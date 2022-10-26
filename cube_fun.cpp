#include<iostream>
using namespace std;
int cube(int a)
{
    return a*a*a;
}

int main()
{
    int a;
    cout<<"Enter  the value of a";
    cin>>a;
    cout<<"cube is "<<cube(a);
    
}