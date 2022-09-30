#include <iostream>
using namespace std;
class complax
{
    int a, b;
    friend complax sumnumber(complax, complax);

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void printdata()
    {
        cout << "this number is " << a << " + " << b << "i" << endl;
    }
};

complax sumnumber(complax h1, complax h2)
{
    complax g0;
    g0.setdata((h1.a + h2.a), (h1.b + h2.b));
    return g0;
}
int main()
{
    complax l1, l2, l3;
    l1.setdata(2, 4);
    l1.printdata();

    l2.setdata(3, 5);
    l2.printdata();

    l3 = sumnumber(l1, l2);
    l3.printdata();
    return 0;
}