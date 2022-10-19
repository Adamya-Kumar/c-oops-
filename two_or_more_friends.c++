#include <iostream>
using namespace std;
class B; // forward delcaration
class A
{
    int a;
    friend void sum_class(A o1, B o2);

public:
    void setData(int x)
    {
        a = x;
    }
};
class B
{

    int b;
    friend void sum_class(A o1, B o2);

public:
    void setData(int y)
    {
        b = y;
    }
};
void sum_class(A o1, B o2)
{
    cout << "sum of two classess member is " << o1.a + o2.b << endl;
}
int main()
{
    A o1;
    B o2;
    o1.setData(2);
    o2.setData(4);
    sum_class(o1, o2);
}