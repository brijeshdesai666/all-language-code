#include <iostream>
using namespace std;
class animals
{
private:
    string animalID;
    string animalAGE;
    string animalNAME;

public:
    void animalid();
    void animalage();
    void animalname();
    string animalsound(string x);
};
void animals ::animalid()
{
    animalID = "hik8908";
    cout << "this animal id is " << animalID << endl;
}
void animals ::animalage()
{
    animalAGE = "500 years";
    cout << "this animal age is " << animalAGE << endl;
}
string animals::animalsound(string x)
{
    cout << "this animal sound is " << x << endl;
}
void animals::animalname()
{
    cout << "Enter the animal name" << endl;
    cin >> animalNAME;
    cout << "this animal name is " << animalNAME << endl;
}
int main()
{
    animals elephant;
    elephant.animalname();
    elephant.animalid();
    elephant.animalage();
    elephant.animalsound("uuuuuuuuuhhhhhhhhh");
    return 0;
}