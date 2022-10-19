#include <iostream>
using namespace std;
// template <class t>            // one argument
template <class t1, class t2> // morethan one argument

class complex
{
    t1 num;
    t2 num1;
    t2 total;

public:
    complex(t1 n1, t2 n2)
    {
        num = n1;
        num1 = n2;
    }
    void setData()
    {
        total = num + num1;
    }
    void display()
    {
        cout << "a is  : " << num << endl;
        cout << "b is  : " << num1 << endl;
        cout << "sum is  : " << total << endl;
    }
};

int main()
{
    complex<float, float> obj(12.12, 9.2);
    obj.setData();
    obj.display();
}