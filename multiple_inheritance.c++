#include <iostream>
using namespace std;
class animals
{
public:
    int height;
    int weight;
    int age;

    void cry()
    {
        cout << "cry function is called" << endl;
    }
};

class male
{
public:
    void speak()
    {
        cout << "speak function is called " << endl;
    }
};

class human : public animals, public male
{
public:
    void eat()
    {
        cout << "eat function is called" << endl;
    }
};

int main()
{
    human ho1;
    ho1.cry();
    ho1.speak();
    ho1.eat();
    ho1.height = 6;
    cout << ho1.height << endl;
    cout << ho1.weight << endl;
    cout << ho1.age << endl;
}