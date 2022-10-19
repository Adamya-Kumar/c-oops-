#include <iostream>
using namespace std;
template <class t>
class complex
{
public:
    t data;
    complex(t a)
    {
        data = a;
    }
    void display();
};
template <class t> // function member class template is used
void complex<t>::display()
{
    cout << data << endl;
}
void fun(int a)
{
    cout << "data type is used fun() is : " << a << endl;
}
template <class t>
void fun(t a)
{
    cout << "template is used fun() is : " << a << endl;
}
int main()
{
    fun(4);     // int a is called
    fun(21.32); // template data type is called
    fun('A');   // template data type is called
    fun(52);    // int a is called
}