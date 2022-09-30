// many member function in vector
// you can use "cplusplus" website for your refersnc

# include <iostream>
# include <vector>
using namespace std;
template <class T>
void display(vector<T> &a){
    for (int i = 0; i < a.size(); i++)
    {
        // cout<<"your " <<i<<" element of vector is ";
        cout<<a[i]<<" ";
    }
        cout << endl;    
}
int main() {
vector<int> vec1;  // zero lenth vector
vector<char> vec2(4); // 4-element charater vector  
// vec2.push_back('8');
// display(vec2);

vector<char> vec3(vec2); // 4-element charter vector from vec2

vector<int> vec4(10,6);  // 6 print 10 times
vector<int> :: iterator aaa = vec4.begin();  // .bigin() point to frist element of vector 
vec4.insert(aaa,44);
display(vec4);


    int element;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the your vector\n");
        cin>>element;
        vec1.push_back(element);
    }
        vec1.pop_back();  // one element of eating beceause is a crezy member function
        display(vec1);   

        vector <int> :: iterator abc = vec1.begin();
        vec1.insert(abc+2,5,9000);
        display(vec1);   
    return 0;
}