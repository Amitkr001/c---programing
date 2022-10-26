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
class b:public a

{
    public:
    void sb()
    {
        cout << "class b"<<endl;
    }
};

class c:public a
{
    public:
    void sc()
    {
        cout<<"class c"<<endl;
    }
};
class d:public b,c
{
    public:
    void sd()
    {
        cout<<"class d"<<endl;
    }
   
};
 int main()
    {
       
        d obj1;
       
        obj1.sd();
        
        getch();
    }