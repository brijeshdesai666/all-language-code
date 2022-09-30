# include <iostream>
# include <fstream>
using namespace std;

int main() {
    string s = "this is sample file";
    ofstream write("xsample");
    write << s;
    write.close();
    return 0;
}