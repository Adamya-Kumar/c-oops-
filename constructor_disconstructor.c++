#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void) // name are same of constructor as class name
    {
        a = 10;
        b = 20;
    }              // constructor declaration
    complex(int x) // name are same of constructor as class name
    {
        a = x;
        b = 20;
    } // constructor declaration

    void printnumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3(99);
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
}