#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

void reverseInteger(int x);
void insertCommas(int x);
int main()
{

    int x = 1234567;
    reverseInteger(x);
    insertCommas(x);

    return 0;
}

void reverseInteger(int x)
{
    int y = 0;
    while(x > 0)
    {
        y = y*10;
        
        y += x%10;
        x /= 10;
    }

    std::cout<<x <<" "<<y <<std::endl;

}

void insertCommas(int x)
{
    std::vector<int > stackOfSections;
    while(x > 0)
    {
        int y = x%1000;
        stackOfSections.push_back(y);
        x /= 1000;
    }    
    
    //i > 0 to go upto second last triplet 
    for(int i = stackOfSections.size()-1; i > 0; i--)
    {
        std::cout<<stackOfSections[i]<<",";
    }
    std::cout<<stackOfSections[0]<<std::endl;
}
