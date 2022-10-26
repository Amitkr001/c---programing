#include <stdio.h>
using namespace std;
int main()
{
    int weekname;
    cout<<" Enter the number 1 to 7(considerd 1=monday and 7=sunday\n";
    cin>>weekname;
    switch (weekname)
    {
    case1:
        cout<<" monday\n";
        break;
    
    case 2:
    
         cout<<"tuesday\n";
        break;

    case 3:
    
        cout<<"wednesday\n";
        break;

    case 4:
    
        cout<<"thrusday\n";
        break;
    
    case 5:
    
        cout<<"friday\n ";
        break;
    
    case 6:
    
        cout<<"saturday\n";
        break;
    
    case 7:
    
        cout<<"satunday\n";
        break;
        
    default :
         cout<<"Enter the number between 1 to 7\n";
}
    return 0;
}