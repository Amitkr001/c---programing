#include<iostream>
using namespace std;
int product(int a,int b){
    return a*b;
}

int main()
{   
    int a,b;
    cout<<"enter a and b";
    cin>>a>>b;
    cout<<"product is"<<product(a,b);
    
}