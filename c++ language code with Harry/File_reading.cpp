#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string j;
    ifstream read("xsample");
    getline(read, j);
    // read >> j;
    cout << j;
    read.close();
    return 0;
}