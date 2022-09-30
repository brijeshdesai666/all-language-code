#include <iostream>
using namespace std;
class binary
{
private:
    string s;

public:
    void read();
    void chk_bir();
    void once();
};

void binary ::read()
{
    cout << "Enter a number to chak binary or not" << endl;
    cin >> s;
}
void binary ::chk_bir()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format!!" << endl;
            exit(0);
        }
    }
}
void binary ::once()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
    cout << s << endl;
}
int main()
{
    binary num;
    num.read();
    num.chk_bir();
    num.once();
    return 0;
}