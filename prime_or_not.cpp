#include<iostream>
using namespace std;

int main()
{
    // TAKING IMPUT AND OUTPUT

    int a,i;
    
    cout<<"ENTER THE NUMBER";
    cin>>a;

    // algorithem of a function 
    
   for (i = 2; i < a ; i++)
   {
     if (a%i==0)
     {
        cout<<"IT IS A PRIME NUMBER" ;
        break;
     }  
   }
    if(i==a)
    {
        cout<<"NOT A PRIME NUMBER";
    }
    return 0;
}