#include <iostream>
using namespace std;
class human
{
public:
    int height;
    int weight;
    int age;

    void setheight(int h)
    {
        height = h;
    }
    void setweight(int w)
    {
        weight = w;
    }
    void setage(int a)
    {
        age = a;
    }
};

class male : public human
{
public:
    int id = 74262;
};

class female : public male
{
public:
    int var = 12;
};

int main()
{
    female fo1;
    fo1.id = 111;
    cout << fo1.id << endl;
    cout << fo1.var << endl;
    fo1.age = 90;
    cout << fo1.age << endl;
    fo1.setheight(5);
    cout << fo1.height << endl;
}