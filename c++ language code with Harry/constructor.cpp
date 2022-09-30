#include <iostream>
using namespace std;
class complax
{
    int a, b;

public:
    complax(void);
    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
complax::complax(){
    a = 6;
    b = 3;
}
int main()
{   
    complax f1;
    f1.printnumber();           // complaxe function automatic call thann make objact 

    return 0;
}

/*

#include <iostream>
using namespace std;
class complax
{
    int a, b;

public:
    complax(int , int);
    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
complax::complax(int x , int y){
    a = x;
    b = y;
}
int main()
{   
    complax f1(5,2);
    f1.printnumber();           // complaxe function automatic call thann make objact 

    complax f2 = complax(4,6);
    f1.printnumber();           // complaxe function automatic call thann make objact 

    return 0;
}
*/