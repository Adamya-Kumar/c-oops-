#include <iostream>
using namespace std;
class hero
{
public:
    int health;
    char level;
    hero()
    {
        cout << "constructor calling" << endl;
    }
    hero(int health)
    {
        this->health = health;
    }
    hero(int health, char level)
    {
    }
    void print()
    {
        cout << "this is " << health << endl;
        cout << "this is " << level << endl;
    }
};
int main()
{
    s.sethealth(10, 'd');

    hero s(10, 'B');
    s.print();

    hero r(s);
    r.print();

    // // ect statically
    // hero ramesh1(10, 'A');
    // ramesh1.print();
    // hero ramesh(80);
    // ramesh.print();
    // // ect dynamically
    // hero *h = new hero;

    // ramesh.health = 70;
    // ramesh.level = 'A';
    // cout << "health of ramesh is " << ramesh.health << endl;
    // cout << "level of ramesh is " << ramesh.level << endl;
}