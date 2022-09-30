#include <iostream>
#include <math.h>
using namespace std;
class abc
{
    int a, b;
    friend int foumula(abc, abc);

public:
    void point(int e, int t)
    {
        a = e;
        b = t;
    }
    void displaypoint()
    {
        cout << "your point is (" << a << " , " << b << ")" << endl;
    }
};
// b1.a = x1 , b1.b = y1   //  b2.a = x2 , b2.b = y2
int foumula(abc b1, abc b2)
{
    int c = (((b2.a) - (b1.a)) * ((b2.a) - (b1.a))) + (((b2.b) - (b1.b)) * ((b2.b) - (b1.b)));
    return (sqrt(c));
}

int main()
{
    abc c1, c2, c3;
    c1.point(1, 0);
    c2.point(70, 0);

    c1.displaypoint();
    c2.displaypoint();

    cout << "there two pointer between distance is (" << foumula(c1, c2) << ")" << endl;
        
    return 0;
}