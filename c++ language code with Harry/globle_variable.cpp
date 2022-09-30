#include <iostream>
using namespace std;

int c = 6569846;
int main()
{
    int a, b, c;
    a = 436;
    b = 427;
    c = a + b;
    cout << "the sum of a and b is " << c << endl;
    cout << "the globle value of c is "<<::c;
    return 0;
}