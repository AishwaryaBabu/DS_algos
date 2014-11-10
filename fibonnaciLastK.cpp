#include<iostream>
#include<vector>

void fibLastK(int max, int k, std::vector<int> &vectorFellow)
{
    int sum = 0;
    for(int i = 0; i < k; i++)
    {
        vectorFellow.push_back(1);
        sum += vectorFellow[i];
    }
   
    int currentPos = vectorFellow.size()-1;
    while(sum <= max)
    {
        vectorFellow.push_back(sum);
        sum = 0;
        for(int i = vectorFellow.size()-1;  vectorFellow.size() - i <= k; i--)
        {
            sum += vectorFellow[i];
        }
    }
}

void printVec(std::vector<int> & vectorFellow)
{
    for(unsigned int i = 0; i < vectorFellow.size(); i++)
        std::cout<<vectorFellow[i]<<" ";
    std::cout<<std::endl;
}

int main()
{

    int value = 20;
    int k = 4;
    std::vector<int> vectorFellow;
    fibLastK(value, k, vectorFellow);
    printVec(vectorFellow);    
}

