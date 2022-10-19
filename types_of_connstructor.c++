// #include <iostream>
// using namespace std;
// class complex
// {
//     int a, b;

// public:
//     complex(int, int);
//     void printnumber()
//     {
//         cout << "your number is  " << a << " + " << b << "i" << endl;
//     }
// };
// complex::complex(int x, int y)
// {
//     a = x;
//     b = y;
// }
// int main()
// {
//     complex a(3, 7);
//     a.printnumber();
// }

#include <iostream>
#include <math.h>
using namespace std;
point p(int, int t);
point q(int, int);
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void printdata()
    {
        cout << "this is point (" << x << " , " << y << ")" << endl;
    }
    void finddist()
    {
        int d = ((p.x - q.x) + (p.y - q.y));
        cout << "distance of point p to q is" << d << endl;
    }
};

int main()
{
    point p(1, 1);
    p.printdata();
    point q(2, 6);
    q.printdata();
}
