#include<iostream>
using namespace std;

inline int add(int a,int b)
{
    return a+b;
}

int main()
{
   int a;
   int b;
   cout<<"Enter numbers";
   cin>>a>>b;
   cout<<"addition is " <<add(a,b);
    
}