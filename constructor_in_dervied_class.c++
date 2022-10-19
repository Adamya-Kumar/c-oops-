// // (without aurgument)
// #include <iostream>
// using namespace std;
// class base1
// {

// public:
//     base1(void)
//     {
//         cout << "base1 constructor is called" << endl;
//     }
// };

// class base2
// {

// public:
//     base2(void)
//     {
//         cout << "base2 constructor is called" << endl;
//     }
// };

// class dervied : public base1, virtual public base2
// {
// public:
//     dervied(void)
//     {
//         cout << "dervied constructor is called" << endl;
//     }
// };
// int main()
// {
//     dervied obj;
// }

// (with aurgument)
#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base1 constructor is called" << endl;
    }
    void print_base1()
    {
        cout << "base1 constructor is " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base2 constructor is called" << endl;
    }
    void print_base2()
    {
        cout << "base2 constructor is " << data2 << endl;
    }
};

class dervied : public base1, public base2
{
    int der1, der2;

public:
    dervied(int a, int b, int c, int d) : base2(b), base1(a)
    {
        der1 = c;
        der2 = d;
        cout << "dervied constructor is called" << endl;
    }
    void print_dervied()
    {
        cout << "der1 constructor is " << der1 << endl;
        cout << "der2 constructor is " << der2 << endl;
    }
};
int main()
{
    dervied obj(1, 2, 3, 4);
    obj.print_base1();
    obj.print_base2();
    obj.print_dervied();
}