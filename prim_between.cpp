#include<iostream>
using namespace std;

int main()
{
    int max,min,i;

    cout<<"enter low value=";
    cin>>min;
    cout<<"enter highest value=";
    cin>>max;
  

        for ( i = min; i <= max; i++)
        {
           if (i%2==0)
           {
               continue;
           }
           if (i>1)
           {
            cout<<""<<i<<endl;
           }
        }
    return 0;
}