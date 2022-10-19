#include <iostream>
using namespace std;
template <class t1 = int, class t2 = float, class t3 = char>     //   default argument is intialized
class complex
{
public:
    t1 a;
    t2 b;
    t3 c;
    complex(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void setData()
    {
        cout << "the value of a is : " << a << endl;
        cout << "the value of b is : " << b << endl;
        cout << "the value of c is : " << c << endl;
    }
};

int main()
{
    complex<> obj(12, 1.32, 'A');       //default data type is used
    obj.setData();
    cout << endl
         << endl;
    complex<char, float, int> obj1('a', 8.6, 10);           //used give data type is used
    obj1.setData();
} 