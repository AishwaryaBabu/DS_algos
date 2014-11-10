#include<stdlib.h>
#include<iostream>

//100,3 -> 1,2,97
//100,3 -> 1,1,98
//104,7 -> 15, 15 , 15, 15, 15, 15, 14

  //  14.
    //14 * 6 = 84
    //104 - 84 = 20
    
    //20 - 14 = 6 
    
    //14, 14, 14, 14, 14, 14, 14
    //6 
    
void printSubSum(int sum, int n) {

    if(abs(sum) >= n && n > 0)
    {
        int floorQuotient = sum / n;
    
        int tempSum = 0;
            //Multiplication

        tempSum  = floorQuotient * (n-1);
        int remaining = sum - tempSum;
        int difference = remaining - floorQuotient;
        
        for(int i = 0; i < difference; i++)
        {
            std::cout<<floorQuotient + 1<<" ";
        }
        for(int i = 0; i < n - difference; i++)
        {
            std::cout<<floorQuotient<<" ";
        }
    }
    else
    {
        std::cout<<"invalid";
    }
}

int main()
{
    printSubSum(104, 7);   
}
