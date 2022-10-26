#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 35, b = 65;
    cout << "%d and %d :\n"<<a,b;
    swap(&a, &b);
    cout << "%d and %d:\n"<<a,b;
    return 0;
}