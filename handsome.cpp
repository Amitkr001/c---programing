#include <iostream>
using namespace std;

int main()
{
    int num, a, last_digit, sum = 0;
    cout << "Enter any number" << endl;
    cin >> num;
    num = num / 10;
    while (num != 0)
    {
        a = num % 10;
        sum = sum + last_digit;
        num = num / 10;
    }

    if (sum == last_digit)
    {
        cout << "Number is handsome" << endl;
    }
    else
    {
        cout << "Number is not handsome" << endl;
    }
    return 0;
}