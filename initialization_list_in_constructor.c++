#include <iostream>
using namespace std;
class test
{
    int a;                 //first initilizated
    int b;                 //second initilizated


public:
    // test(int i, int j) : a(i),b(j)
    // test(int i, int j) : a(i + j + j), b(i + i + j)
    // test(int i, int j) : a(i), b(3 * j)
    // test(int i, int j) : a(i), b(a * j)
    test(int i, int j) : b(j), a(i + b)             //error first intilizated run first  
    {
        cout << "constructor callled" << endl;
        cout << "value of a is " << a << endl;
        cout << "value of b is " << b << endl;
    }
};

int main()
{
    test x(3, 4);
}