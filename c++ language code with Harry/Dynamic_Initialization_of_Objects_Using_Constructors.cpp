#include <iostream>
using namespace std;
class BankDeposit
{
    int principal;
    int years;
    float interstRate;
    float returnValue;
    float ExtraAmount;

public:
    BankDeposit() {}
    BankDeposit(int, int, float);
    BankDeposit(int, int, int);
    void Amount();
    void printData();
};

void BankDeposit :: Amount(){
    ExtraAmount = (returnValue - principal);
} 

void BankDeposit ::printData(){
    cout << "your principal amount was "<<principal<<". there return value after "<<years<<" years is "<<returnValue<<"/-"<<endl;
    cout << "incrized your amount is "<<ExtraAmount<<endl;
}


BankDeposit ::BankDeposit(int p, int y, float i)
{
    principal = p;
    years = y;
    interstRate = i;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interstRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int I)
{
    principal = p;
    years = y;
    interstRate = float(I) / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interstRate);
    }
}
int main()
{
    BankDeposit d1, d2;
    int p, y, I;
    float i;
    cout << "Enter your p, y and i value" << endl;
    cin >> p >> y >> i;
    d1 = BankDeposit(p, y, i);
    d1.Amount();
    d1.printData();


    cout << "Enter your p, y and I value" << endl;
    cin >> p >> y >> I;
    d2 = BankDeposit(p, y, I);
    d2.Amount();
    d2.printData();

    return 0;
}