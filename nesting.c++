#include <iostream>
using namespace std;
class binary
{
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones(void);
    void display(void);
};
void binary::read(void)
{
    cout << "Enter the binary number " << endl;
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary number" << endl;
            exit(0);
        }
    }
}
void binary::ones(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    cout << endl
         << "display the binary number " << endl;
    for (int i = 0; i < s.length(); i++)
        cout << s.at(i);
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones();
    b.display();
}
