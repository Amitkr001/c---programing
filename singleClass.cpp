#include<iostream>
#include<conio.h>
using namespace std;

class a
{
    public:
   void sa()
    {
        cout << "class a" <<endl;
    }
};
class b: public a

{
    public:
    void sb()
    {
        cout << "class b"<<endl;
    }
};
class c: public b
{
    public:
    void sc()
    {
        cout<<"class c"<<endl;
    }
    void main()
    {
        c obj1=new();
        obj1.sa();
        obj1.sb();
        obj1.sc();
    }
};