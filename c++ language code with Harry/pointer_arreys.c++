#include <iostream>
using namespace std;

int main()
{
    int marks[] = {24, 56, 89, 53, 65, 32, 28, 53};
    int *m = marks;
    cout << "frist element of marks arrey is " << *m << endl;
    cout << "second element of marks arrey is " << *(m + 1) << endl;
    cout << "third element of marks arrey is " << *(m + 2) << endl;
    cout << "fourth element of marks arrey is " << *(m + 3) << endl;
    cout << "fiveth element of marks arrey is " << *(m + 4) << endl;

    return 0;
}