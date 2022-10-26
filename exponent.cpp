#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
 {
    long double k;
 
    cout << "Enter any number for find exponent\n";
    cin >> k;
 
    cout <<  "^" << k << " = " <<exp(k);
    return 0;
}