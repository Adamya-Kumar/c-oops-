#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void getprice(void);
    void display(void);
};
void shop::getprice(void)
{
    cout << "Enter Id of your items " << endl;
    cin >> itemId[counter];
    cout << "Enter price of your items " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop object;
    object.initcounter();
    object.getprice();
    object.getprice();
    object.getprice();
    object.display();
}