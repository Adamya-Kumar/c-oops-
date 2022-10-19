#include <iostream>
using namespace std;
class shop
{
    int itemsId[100];
    int itemPrice[100];
    int counter = 0;

public:
    void getPrice(void);
    void displayPrice(void);
};

void shop::getPrice()
{
    cout << "Enter the itemid" << endl;
    cin >> itemsId[counter];
    cout << "Enter the itemprice" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << itemPrice[i] << endl;
        cout << itemsId[i] << endl;
    }
}
int main()
{
    shop item1;
    item1.getPrice();
    item1.getPrice();
    item1.getPrice();
    item1.getPrice();
    item1.displayPrice();
}