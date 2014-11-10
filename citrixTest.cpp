#include <iostream>

class A
{
    public:
        virtual void speak(void)
        {
            std::cout<<"A";
        }
};

class B: public A
{
    public:
        void speak(void)
        {
            std::cout<<"B";
        }
};

class C: public B
{
    public:
        void speak(void)
        {
            std::cout<<"C";
        }
};

int main()
{
    A a;
    B b;
    C c;
    
    A * pa;
    pa = &a; pa->speak();
    pa = &b; pa->speak();
    pa = &c; pa->speak();

    B* pb;
    pb = &b; pb->speak();
    pb = &c; pb->speak();

    std::cout<<std::endl;

    return 0;
}
