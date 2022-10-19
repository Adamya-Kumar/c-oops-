#include <iostream>
using namespace std;
class complex
{
    int l, b, h;

public:
    void setData(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    void getData()
    {
        cout << "area is :" << l << endl
             << b << endl
             << h << endl;
    }
};
int main()
{
    complex o1;
    o1.setData(12, 34, 32);
    o1.getData();
}