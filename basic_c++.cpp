#include <iostream>
using namespace std;

int main()
{
    int a, b, sum, multi, sub, mod;
    float div;
    cout << "Enter First Number a: \n";
    cin >> a;
    cout << "Enter Second Number b: \n";
    cin >> b;
    sum = a + b;
    multi = a * b;
    sub = a - b;
    mod = a % b;
    div = (float)a / b;
    cout << "Sum of two no : "<< sum << "\n" ;
    cout << "Multiplication of two no : " << multi << "\n";
    cout << "Subtraction of two no : " << sub << "\n";
    cout << "Modulus of two no : " << mod << "\n";
    cout << "Division of two no : "<< div << "\n";
    return 0;
}