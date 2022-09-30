# include <iostream>
# include <fstream>
using namespace std;

int main() {
    ofstream write;
    write.open("xsample2.txt");
    write << "this is me and my dream \nWOW amazing!!!!!!!!";
    write.close();

    ifstream read;
    string abc;
    read.open("xsample2.txt");
    // read >> abc;
    // cout << abc;
     while(read.eof()==0){
        getline(read , abc);
        cout << abc << endl;
     }
     read.close();
    return 0;
}