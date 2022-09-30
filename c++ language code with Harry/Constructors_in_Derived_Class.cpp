#include <iostream>
using namespace std;
class Base1
{
    int b1;

public:
    Base1(int a)
    {
        b1 = a;
        cout << "the number of b1 is " << b1 << endl;
    }
};

class Base2{
    int b2;
    public:
        Base2(int a){
            b2 = a;
            cout << "the number of b2 is " << b2 <<endl;
        }
};

class Derived : public Base1 , public Base2{
    int D1;
    public:
    Derived(int a, int b, int c) : Base1(a), Base2(b){
        D1 = c;
        cout << "the number of derived class is " << D1 << endl;
    }
};
int main()
{
    Derived f3(3,6,8);

    return 0;
}