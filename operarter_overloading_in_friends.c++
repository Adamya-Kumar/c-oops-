#include <iostream>
using namespace std;
class complex
{
    int a, b;
    friend complex operator+(complex o1, complex o2);

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printData()
    {
        cout << "sum is : " << a << "!=" << b << endl;
    }
};
complex operator+(complex o1, complex o2)
{
    complex temp;
    temp.a = o1.a + o2.a;
    temp.b = o1.b + o2.b;
    return temp;
}
int main()
{
    complex o1, o2, o3;
    o1.setData(1, 4);
    o2.setData(2, 6);
    o3 = o1 + o2;
    o3.printData();
}