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

int main()
{
    male object1;
    object1.setheight(6);
    object1.setweight(70);
    object1.setage(25);
    cout << object1.height << endl;
    cout << object1.weight << endl;
    cout << object1.age << endl;
    cout << object1.id << endl;
}