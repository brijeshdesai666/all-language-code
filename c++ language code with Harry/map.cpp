# include <iostream>
# include <map>
# include <string>
using namespace std;

int main() {
    map<string,int> result;
    result["abc"] = 54;
    result["abcd"] = 44;
    result["abce"] = 64;
    result.insert({{"eddf" , 35},{"hygf" , 37}});
    map<string,int> :: iterator ppp;
    for (ppp = result.begin(); ppp != result.end(); ppp++)
    {
        cout << (*ppp).first << " " <<(*ppp).second<<endl;
    }
    

    return 0;
}