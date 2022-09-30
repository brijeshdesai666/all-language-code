# include <iostream>
using namespace std;

int main() {
    enum abc {breakfast,lunce,dinner};
    cout << breakfast << endl;
    cout << lunce << endl;
    cout << dinner << endl;

    abc a1 = dinner;
    cout <<endl<< a1;
    return 0;
}