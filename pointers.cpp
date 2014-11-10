#include<iostream>
#include<string.h>

int* function()
{
    int a = 5;
    int* p = &a;

    return p;
}

int main()
{
//    const char *a = "something is wrong";
//    std::cout<<strlen(a)<<std::endl;

    int* q = function();
    std::cout<<++(*q)<<std::endl;

//int * y = &x - does not work 
/*
    int b = 5;
    int * x = &b;
    int * y = x;
    std::cout<<*y<<std::endl;
*/

    int b = 7;
    int * x = &b;
    int ** z = &x;
    std::cout<<*(*z)<<std::endl;

    return 0;
}
