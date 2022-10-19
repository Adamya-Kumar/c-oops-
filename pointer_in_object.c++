// #include <iostream>
// using namespace std;
// class complex
// {
//     int a;
//     int b;

// public:
//     void setData(int i, int j)
//     {
//         a = i;
//         b = j;
//     }
//     void getData()
//     {
//         cout << "the value of real is " << a << endl;
//         cout << "the value of real1 is " << b << endl;
//     }
// };

// int main()
// {
//     // complex o1;
//     // complex *ptr = &o1;
//     complex *ptr = new complex;
//     (ptr)->setData(12, 54);
//     (ptr)->getData();
// }

#include <iostream>
using namespace std;
class shop_Items
{
    int a, b;

public:
    void setData(int p, int q)
    {
        a = p;
        b = q;
    }
    void getData()
    {
        cout << "Item id is : " << a << endl;
        cout << "Item price is : " << b << endl;
    }
};

int main()
{
    shop_Items *ptr = new shop_Items[4];
    int i, p, q;

    for (i = 0; i < 4; i++)
    {
        cout << "Enter the item Id and item Price(" << i + 1 << ") : " << endl;
        cin >> p >> q;

        (ptr + i)->setData(p, q);
    }
    for (i = 0; i < 4; i++)
    {
        (ptr + i)->getData();
    }
}