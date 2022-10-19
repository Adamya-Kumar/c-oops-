#include <iostream>
using namespace std;
template <class t>
class complex
{
public:
    t data;
    complex(t a)
    {
        data = a;
    }
    void display();
};
template <class t> // function member class template is used
void complex<t>::display()
{
    cout << data << endl;
}
int main()
{
    complex<int> obj(30);
    cout << obj.data << endl;
    obj.display();
}