# include <iostream>
# include <list>
using namespace std;
void display(list<int> &ls){
    list<int> :: iterator it;
    for (it = ls.begin(); it != ls.end(); it++)
    {
        cout<<*it<<" ";        
    }
    
}
int main() {
    list<int> list1;
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(2);
    list1.push_back(7);


    // list<int> :: iterator oip = list1.begin();
    // cout<<*oip<<" ";
    // oip++;
    // cout<<*oip<<" ";
    display(list1);
    return 0;
}