#include <iostream>
using namespace std;

int main()
{
    // //************build in data type***************
    // cout << "The size of 56.4 is " << sizeof(56.4) << endl;   // double
    // cout << "The size of 56.4f is " << sizeof(56.4f) << endl; // float
    // cout << "The size of 56.4F is " << sizeof(56.4F) << endl; // float
    // cout << "The size of 56.4l is " << sizeof(56.4l) << endl; // long
    // cout << "The size of 56.4L is " << sizeof(56.4L) << endl; // long

    // //*************reference variable********
    // int e = 546;
    // int &y = e;
    // cout << e << endl;
    // cout << y;
    // *************type casting***************
    float q = 23.98;
    float w = 68.7;
    cout << "The value of q is " << q << endl;
    cout << "The value of w after typecasting " << (int)w << endl;
    cout << "The value of w after typecasting " << int(w) << endl;
    return 0;
}