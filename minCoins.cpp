#include <iostream>
#include <vector>
int main()
{
    int total = 15;
    int denominations[] = {1, 2, 5, 10};
    int numDen = 4;
    std::vector<int> numCoins;
    numCoins.push_back(0);

    for(int i = 1; i <= total; i++)
    {
        numCoins.push_back(0);    
    }

    const int MAX = 50; 
    for(int i = 0; i <= total; i++)
    {
        int count = MAX;
        for(int j = 0; j < numDen; j++)
        {
            if(i - denominations[j] == 0)
                count = 1;
            else if(i-denominations[j] > 0 && numCoins[i-denominations[j]] + 1 < count)
                count = numCoins[i-denominations[j]] + 1; 
        }
        
            numCoins[i] = count;
    }
    
    std::cout<<"Min coins required for "<<total<<" are "<< numCoins[total]<<std::endl;

    return 0;
}
