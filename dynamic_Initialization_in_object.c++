#include <iostream>
using namespace std;
class bank
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    bank() { cout << endl
                  << "default constructor" << endl; };
    bank(int p, int y, float r);
    bank(int p, int y, int R);

    void showData()
    {
        cout << "retutn amount is : " << returnValue << endl;
    }
};
bank ::bank(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
bank::bank(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
int main()
{
    bank b1, b2;
    int p = 100, y = 1, R = 3;
    float r = 0.03;
    b2 = bank(p, y, r);
    b2.showData();
    b1 = bank(p, y, R);
    b1.showData();
}
