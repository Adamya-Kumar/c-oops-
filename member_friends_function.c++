#include <iostream>
using namespace std;
class complex;
class calcuator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex); // delecration of function
    int sumcompcomplex(complex, complex); // delecration of function
};

class complex
{
    int a, b;
    // individual using friend function
    // friend int calcuator::sumrealcomplex(complex o1, complex o2);
    // friend int calcuator::sumcompcomplex(complex o1, complex o2);

    // 100 friend we use class
    friend class calcuator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "your number is  " << a << " + " << b << endl;
    }
};
int calcuator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calcuator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);
    calcuator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumcompcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << resc << endl;
}