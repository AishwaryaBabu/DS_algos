#include <iostream>
#include <algorithm>
#include <vector>

bool binarySearch(int num, std::vector<int> & arr, int low, int high)
{

    int middle = low + (high-low)/2;
    bool flag;
    std::cout<<middle<<std::endl;

    if(high < low)
        return false;    

    else
    {
        if(num < arr[middle])
        {
            return binarySearch(num, arr, low, middle-1);
        }   
        else if(num > arr[middle])
        {
            return binarySearch(num, arr, middle+1, high); 
        }    
        else
        {
            return true;
        }
    }
}

int main()
{

    int array[] = {2, 5, 6, 32, 1, 0, 10, 8, 9, 18, 25, 73};

    std::vector<int> arr(array, array + sizeof(array)/sizeof(int));

    std::sort(arr.begin(), arr.end());
/*
    for(int i = 0; i < arr.size(); i++)
    {
        std::cout<<arr[i]<<" "<<std::endl;
    }
*/
    int num = 33;
    if(binarySearch(num ,arr, 0, arr.size()-1))
        std::cout<<"Found"<<std::endl;
    else
        std::cout<<"Not found"<<std::endl;
    return 0;
}
