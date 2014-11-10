#include <iostream>

using namespace std;

class Base{
    public:
        Base()
        {
            cout<<"I am Base"<<endl;
        }

};

class Derived : Base {
    public:
        Derived()
        {
            cout<<"I am Derived"<<endl;
        }

};

int main()
{
    Derived obj;

    return 0;
}


