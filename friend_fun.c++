#include <iostream>
using namespace std;
class complex
{
    int a, b;
    friend complex sum_complex(complex o1, complex o2);

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printData()
    {
        cout << "your complex number is " << a << " + " << b << "i" << endl;
    }
};
complex sum_complex(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setData(1, 4);
    c1.printData();
    c2.setData(5, 8);
    c2.printData();

    sum = sum_complex(c1, c2);
    sum.printData();
}