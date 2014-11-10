#include <iostream>

int sqrtUsingBinarySearch(int value, int low, int high);
int sqrtBinarySearchIterative(int n);
int main()
{

    int num = 33;
    int sqrtValue = sqrtUsingBinarySearch(num, 0, num+1);
    //    int sqrtValue = sqrtBinarySearchIterative(num);
    std::cout<<"sqrt of: "<<num<<" is "<<sqrtValue<<std::endl;

    return 0;
}

int sqrtBinarySearchIterative(int n)
{
    int low = 0;
    int high = n+1;

    while(high-low > 1)
    {
        int mid = (low+high) / 2;
        if (mid*mid <= n)
            low = mid;
        else
            high = mid;
    }
    return low;
}

int sqrtUsingBinarySearch(int value, int low, int high)
{
    //This line is Key !!!! Difference has to be greater than 1
    if(high-low <= 1)
        return low;   

    else
    {
        int mid = (low +high)/2;

        if(mid*mid <= value)
        {
            low = mid;
//      return sqrtUsingBinarySearch(value, mid, high);
        }
        else
        {
            high = mid;
//        return sqrtUsingBinarySearch(value, low, mid);
        }
        return sqrtUsingBinarySearch(value, low, high);
    }
}
