#include<iostream>
using namespace std;

int main()
{
    int max,min,i,j;

    cout<<"enter low value=";
    cin>>min;
    cout<<"enter highest value=";
    cin>>max;
      min=j;

        for ( i = min; i <= max; i++)
        {
           if (i%i==0)
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