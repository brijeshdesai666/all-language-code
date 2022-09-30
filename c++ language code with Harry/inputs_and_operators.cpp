# include <iostream>
using namespace std;

int main() {
    long long int a,b;
    cout << "Enter the value of a \n";
    cin >> a;

    cout << "Enter the value of b " << endl;   // \n == endl
    cin >> b;

    cout << "The sum of a and b is " << a + b;
    cout << "\n++a value is  " << ++a;  //  incriment and print
    cout << "\n--a value is  " << --a;  
    cout << "\na++ value is " << a++;  // print and incriment
    cout << "\na-- value is " << a--;
    return 0;
}