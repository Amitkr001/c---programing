#include<iostream>
using namespace std;

int main()
{
int a=0,b=1,i,next=0,n;
cout<<"ENTER LAST DIGIT OF FABONACI SERIOUS";
cin>>n;
for ( i = 1; i <= n ; i++)
  {
      if(i==1)
      {
          cout<<""<<a;
          continue;
      }
      if (i==2)
      {cout<<""<<b;
      continue;
      }
    next=a+b;
    a=b;
    b=next;
    cout<<""<<next;

   }


 
}

