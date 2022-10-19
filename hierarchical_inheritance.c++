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

class B : public A
{
public:
    void fun_b()
    {
        cout << "function b is called" << endl;
    }
};

class C : public A
{
public:
    void fun_c()
    {
        cout << "function c is called" << endl;
    }
};
int main()
{
    A obj;
    obj.fun_a();
    B obj1;
    obj1.fun_a();
    obj1.fun_b();
    C obj2;
    obj2.fun_a();
    obj2.fun_c();
}
