#include <iostream>
using namespace std;

int main()
{
    int num, a = 1;
    long double facto = 1;

    cout << "Enter number to calculate factorial:\n ";  //tum run karo jaise karti ho okk
    cin >> num;
        for(int i = 1; i <=num; ++i) 
        {
            facto = facto * i;
        }
        cout << "Factorial of " << num << " = " << facto;    
    return 0;
}

