#include <iostream>
using namespace std;
int c = 99;
int main()
{
    // int a, b, c;
    // cout << "Enter the a is " << endl;
    // cin >> a;
    // cout << "Enter the b is " << endl;
    // cin >> b;
    // c = a + b;
    // cout << "local variable c is " << c << endl;
    // cout << "golobal variable is" << ::c << endl; //this is golobal declaration :: to access the golobal value of c

    //     float d = 23.4;                       //by default the 23.4 in c++ complier is  act as double
    //     long double e = 23.4;
    //         //we can manpulilate by add letter in last :
    //         // example are:
    //     cout << "the value of d is " << sizeof(23.4f) << endl;
    //     cout << "the value of d is " << sizeof(23.4F) << endl;
    //     cout << "the value of d is " << sizeof(23.4l) << endl;
    //     cout << "the value of d is " << sizeof(23.4L) << endl;

    // // >>>>>>>>>>>>>>>>>>>>>>>>reference variable<<<<<<<<<<<<<<<
    // // rohan das-------->rohu-------->dangerrous coder
    // float x = 455;
    // float &y = x;      //we change the name of x to y but varibale is same
    // //refernce variable only change the name of varible that can access by difference difference name
    // cout << x << endl;
    // cout << y << endl;

    // >>>>>>>>>>>>>>>>typecasting<<<<<<<<<<<<<<<<<
    int a = 45;
    float b = 34.542312;
    cout << "the value of a is " << (int)b << endl;
    cout << "the value of a is " << int(b);
}