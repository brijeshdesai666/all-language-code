#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 6, b = 34, c = 234, d = 3465;
    cout << "The value of a is : " << a << endl;
    cout << "The value of b is : " << b << endl;
    cout << "The value of c is : " << c << endl;
    cout << "The value of d is : " << d << endl;

    cout << "\nThe value of a is : " << setw(4) << a << endl;
    cout << "The value of b is : " << setw(4) << b << endl;
    cout << "The value of c is : " << setw(4) << c << endl;
    cout << "The value of d is : " << setw(4) << d << endl;
    return 0;
}