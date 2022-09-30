#include <iostream>
using namespace std;
class complaxe
{
private:
    int a;
    int b;

public:
    void setdata(int, int);
    void setdatabysum(complaxe, complaxe);
    void printdata();
};
void complaxe ::setdata(int x, int y)
{
    a = x;
    b = y;
}
void complaxe ::setdatabysum(complaxe a1, complaxe a2)
{
    a = a1.a + a2.a;
    b = a1.b + a2.b;
    printdata();
}
void complaxe ::printdata()
{
    cout << "your complaxe number is " << a << " + " << b << "i" << endl;
}
int main()
{
    complaxe n1, n2, n3;
    n1.setdata(2, 5);
    n2.setdata(5, 6);
    n3.setdatabysum(n1, n2);

    return 0;
}