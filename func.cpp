#include<iostream>
using namespace std;

int greater(int a, int b)
{
    if (a>b)
    return a;
    else
    return b;
}
int main()
{
    int a,b;
    cout<<"Enter any number\n";
    cin>>a>>b;
    int value = greater(a,b);
    cout<<"Greater number is: \n"<<value;
return 0;
}