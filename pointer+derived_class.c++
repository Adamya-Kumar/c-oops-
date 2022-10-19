#include <iostream>
using namespace std;
class base_class
{
public:
    int var_base;
    void display()
    {
        cout << "displaying base class of var_base : " << var_base << endl;
    }
};
class dervied_class : public base_class
{
public:
    int var_dervied;
    void display()
    {
        cout << "displaying base class of var_base : " << var_base << endl;
        cout << "displaying base class of var_dervied : " << var_dervied << endl;
    }
};
int main()
{
    base_class *base_class_pointer;
    base_class obj_base;
    dervied_class obj_dervied;
    base_class_pointer = &obj_dervied;
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_dervied = 1134;// error
    base_class_pointer->display();
    dervied_class *dervied_class_pointer;
    dervied_class_pointer = &obj_dervied;
    dervied_class_pointer->var_dervied = 111;
    dervied_class_pointer->var_base = 99;

    dervied_class_pointer->display();
}