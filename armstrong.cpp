#include <iostream>
using namespace std;

int main()
{
    int num, originalnum, remainder = 0, temp;
    cout<<"Enter a number"<<endl;
    cin>>num;
    temp = num;
    while (num != 0)
    {
    originalnum = num % 10;
        remainder = remainder + originalnum * originalnum * originalnum;
        num = num / 10;
    }
    if (temp == remainder)
    {
        cout<<"It is armstrong number"<<endl;
    }
    else
    {
        cout<<"It is not a armstrong number"<<endl;
    }

    return 0;
}