#include <iostream>
using namespace std;
class A
{
public:
    void fun_a()
    {
        cout << "function a is called" << endl;
    }
};
class D
{
public:
    void fun_d()
    {
        cout << "function d is called" << endl;
    }
};
class B : public A
{
};
class C : public A, public D
{
};
int main()
{
    B obj;
    obj.fun_a();
    cout << "we create object in C" << endl;
    C obj2;
    obj2.fun_a();
    obj2.fun_d();
}