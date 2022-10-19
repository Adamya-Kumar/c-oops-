#include <iostream>
using namespace std;
static int count;
class number
{

public:
    number()
    {
        cout << "when constructor is called : " << count << endl;
        count++;
    }
    ~number()
    {
        cout << "when distructor is called : " << count << endl;
        count--;
    }
};
int main()
{
    cout << "create n1" << endl;
    number o1;
    {
        cout << "create n2" << endl;
        number o2;
        cout << "create n3" << endl;
        number o3;
        cout << "end of block" << endl;
    }
    cout << "in main function" << endl;
}