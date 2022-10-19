#include <iostream>
using namespace std;
class number
{
    int a, b;

public:
    // number()
    // {
    //     a = 0;
    //     b = 0;
    // }
    number(int a1 = 11, int b1 = 22) // default argument and parameterimed constructor
    {

        a = a1;
        b = b1;
    }
    number(number &obj)
    {
        cout << "copy constructor called" << endl;
        a = obj.a;
        b = obj.b;
    }
    void showData()
    {
        cout << "the output is : " << a << " and " << b << endl;
    }
};
int main()
{
    number o1, o2, o3(12, 89);
    o1.showData();
    o2.showData();
    o3.showData();
    number copy(o3);
    o3.showData();
}