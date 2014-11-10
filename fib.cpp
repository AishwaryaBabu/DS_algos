#include <iostream>

int bottomUp(int n)
{
    int val1, val2;
    int sum;
    if(n <= 2)
        sum = 1;
    else
    {
        val1 = 1;
        val2 = 1;
        for(int i = 3; i < n+1; i++)
        {
            sum = val1 + val2;
            val1 = val2;
            val2 = sum;
        }
    }

    return sum;
}

int main()
{
    int n = 6;
    std::cout<<bottomUp(n)<<std::endl;

    return 0;
}
