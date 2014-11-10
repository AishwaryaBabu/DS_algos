#include <iostream>

void printPasswords(int end, int length)
{
    if(length == 0)
        return;

    for(int i = end; i >= length; i--)
    {
        printPasswords(i-1, length-1);
        std::cout<<i;
    }
    std::cout<<std::endl;
}

void printPasswords(int length)
{
    for(int i = 9; i >= length; i--)
    {
        printPasswords(i-1, length-1);
        std::cout<<i<<std::endl;
    }
}

int main()
{

    int length = 3;
    printPasswords(length);
    return 0;
}

