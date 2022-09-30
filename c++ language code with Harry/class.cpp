#include <iostream>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e, f;

    void setvalue(int x, int y, int z);
    void printValue()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
        cout << "The value of f is " << f << endl;
    }
};

void employee ::setvalue(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}
int main()
{

    employee value;
    value.d = 5;
    value.e = 6;
    value.f = 7;
    value.setvalue(2,3,4);
    value.printValue();

    cout<<endl;
    
    employee num;
    num.d = 7;
    num.e = 6;
    num.f = 5;
    num.setvalue(0,9,8);
    num.printValue();    
    return 0;
}