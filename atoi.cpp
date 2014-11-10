#include <iostream>
#include <string>
int main()
{
    std::string s = "-3456";
    int num = 0;
    int i = 0;
    int sign =  1;

    if(s[0] == '-')
    {
        sign = -1;
        i++;
    }

    
    for(; i< s.length(); i++)
    {
        num = num*10 + (s[i] - '0');    
    }

    num = num* sign;
    std::cout<<num<<std::endl;
    return 0;
}
