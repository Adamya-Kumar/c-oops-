#include <iostream>
#include <string.h>
using namespace std;
static int st = 0;
const int ct = 3.14;
class students
{
    int a, b;

public:
    void setdata(int x, int y);
    void display();
};
void students::setdata(int x, int y)
{
    a = x;
    b = y;
}
void students::display()
{
    cout << a << " " << b;
}
int main()
{
    students obj;
    obj.setdata(12, 88);
    obj.display();
    return 0;
}