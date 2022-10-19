#include <iostream>
using namespace std;
class A
{
public:
    void fun()
    {
        cout << "class A function is called" << endl;
    }
};
class B
{
public:
    void fun()
    {
        cout << "class B function is called" << endl;
    }
};
class C : public A, public B
{
};
int main()
{
    C object;
    object.A::fun();
    object.B::fun();
}