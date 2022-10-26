#include<iostream>
using namespace std;

int main()
{
    //declare two integer variables
    int num = 212, i;

    //shift right operation
    cout << "Shift Right: " << endl;

    //using for loops for shifting num right from 0 bit to 3 bits
    for (i = 0; i < 4; i++)
    {
    cout << "212 >> " << i << "=" << (212 >> i) << endl;
    }
    //shift left operation
    cout << "\n Shift Left: " << endl;

    //using for loop for shifting num left from 0 bit to 3 bits
    for ( i = 0; i < 4; i++)
    {
        cout << "212 << " << i << " = "  << (212 << i) << endl;
    }
    return 0;
}

