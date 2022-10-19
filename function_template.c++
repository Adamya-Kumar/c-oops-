#include <iostream>
using namespace std;
template <class t>
int compair(t x, t y, t z)
{
    if (x > y)
    {
        if (x > z)
        {
            cout << x << endl;
        }
    }
    if (y > z)
    {
        if (y > x)
        {
            cout << y << endl;
        }
    }
    if (z > x)
    {
        if (z > y)
        {
            cout << z << endl;
        }
    }
}
int main()
{
    compair(12, 51, 1);
    compair(12.99, 54.32, 7.1);
}