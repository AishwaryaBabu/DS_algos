#include <iostream>
#include <string>

bool checkSubString(std::string str1, std::string str2);

int main()
{
    std::string str1 = "thisisastring";
    std::string str2 = "tsgr";
    std::cout<<checkSubString(str1, str2)<<std::endl;

    return 0;
}

bool checkSubString(std::string str1, std::string str2)
{
    int i = 0;
    int k = 0;
    int n = str1.length();

    while(i < n)
    {
        if(str1[i] == str2[k])
        {
            i++;
            k++;
        }
        else
            i++;
    }

    if(k == str2.length())
        return true;
}
