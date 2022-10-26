#include<iostream>
using namespace std;

int main()
{
    
    int num;

    cout<<"enter any number from 1 to 5"<<endl;
    cin>>num;
    
    switch(num)
    {
        case '1':
        cout<<"one";
        break;

        
        case '2':
        cout<<"two";
        break;
        
    case '3':
        cout<<"three";
        break;

    case '4':
        cout<<"four";
        break;

    case '5':
        cout<<"five";
        break;

        default:
        cout<<"don't worry im learning";
        break;
    }


    return 0;
}