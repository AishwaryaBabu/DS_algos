#include<iostream>

static int iterFellow = 0;
class CheckPrivateConstructor
{
    int i;
    int j;
    CheckPrivateConstructor()
    {
        i = 3;
        j = 4;
    }

    public :
        void printFellow()
        {
            std::cout<<"iterFellow: "<<iterFellow++<<std::endl;
        }

};

class Base 
{
    public:
        void Func1()
        {
            std::cout<<"I am in Base"<<std::endl;
        }

};

class Derived : public Base
{
    public:
        void Func1()
        {
            std::cout<<"I am in Derived"<<std::endl;
        }
};

int main()
{
/*
    Base *b;
    Derived *d = new Derived();
    
    b = d;
    b->Func1();
    d->Func1();
*/
    CheckPrivateConstructor obj1, obj2;
    obj1.printFellow();
    obj2.printFellow();

 return 0;
}


