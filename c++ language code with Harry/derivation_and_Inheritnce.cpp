/*
    protected member :
                            public derivation         private derivation             protected derivation
    1. private member:      Not inherited               Not inherited                  Not inherited
    2. protected member:    protected                   private                        protected
    3. public member:       public                      private                        protected

*/

#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

private:
    int b;
};
class derived : protected Base
{
};
int main()
{
    derived d1;
    // cout<<d1.a; // Thorow an Error
    return 0;
}