#include <iostream>
using namespace std;
class complax;

class calculator
{
public:
    int sumcomplax(complax, complax);
    int sumcomplax2(complax, complax);
};

class complax
{
    int a, b;
    // friend int calculator ::sumcomplax(complax, complax);   // this friend function
    friend class calculator; // this class friend

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

int calculator ::sumcomplax(complax l1, complax l2)
{
    return (l1.a + l2.a);
}

int calculator ::sumcomplax2(complax l1, complax l2)
{
    return (l1.b + l2.b);
}

int main()
{
    complax v1, v2, v3;
    v1.setdata(3, 5);
    v1.printdata();

    v2.setdata(4, 1);
    v2.printdata();

    calculator gg;
    int result = gg.sumcomplax(v1, v2);
    cout << "this number if complax is " << result << endl;

    int result2 = gg.sumcomplax2(v1, v2);
    cout << "this number if complax is " << result2 << endl;
    return 0;
}