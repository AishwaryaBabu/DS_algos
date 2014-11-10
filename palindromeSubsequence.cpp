#include <iostream>
#include <string>

int max(int i, int j)
{
    return (i > j ? i : j);
    
}

int palindromeSub(std::string s, int i, int j)
{
    if(i == j)
        return 1;
    else if(s[i] == s[j] && i+1 == j)
            return 2;
    else if(s[i] == s[j])
        return palindromeSub(s, i+1, j-1) + 2;
    else
        return max(palindromeSub(s, i, j-1), palindromeSub(s, i+1, j));
}

int main()
{
    std::string s = "BBABCBCAB";
    std::cout<<palindromeSub(s, 0, s.length()-1)<<std::endl;

    return 0;
}
