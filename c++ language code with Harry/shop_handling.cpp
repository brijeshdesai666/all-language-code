#include <iostream>
using namespace std;
class shop
{
    int itemid[50];
    int itemprice[50];
    int cou;

public:
    void counter()
    {
        cou = 0;
    }
    void setdetails();
    void displaydetails();
};
void shop ::setdetails()
{
    cout << "Enter your " << cou + 1 << " item id\n";
    cin >> itemid[cou];
    cout << "Enter your " << cou + 1 << " item price\n";
    cin >> itemprice[cou];
    cou ++;
}
void shop ::displaydetails()
{   for (int i = 0; i < cou; i++)
{
    cout << "your item id is " << itemid[i] << " and that price is " << itemprice[i] << endl;
}
}
int main()
{   int x;
    cout << "how much item you want to store\n";
    cin >> x;
    shop limitade;
    limitade.counter();
    for (int i = 0; i < x; i++)
    {
    limitade.setdetails();
    }
    
    limitade.displaydetails();
    return 0;
}