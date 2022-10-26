#include <iostream>
using namespace std;

int main()
{
    int num1, num2, max, lcm;
    cout << "Program to find lcm of two number" << endl;
    cout << "Enter two integer" << endl;
    cin >> num1 >> num2;
    if (num1 > num2)

        max = num1;

    else
        max = num2;

    while (1)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            lcm = max;
            break;
        }
        
        else
        {
            max = max;
        }
        cout << "lcm of " << num1 << " and " << num2 << " is " << endl;
    }
    return 0;
}