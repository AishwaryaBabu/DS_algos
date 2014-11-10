#include <iostream>
#include <vector>

void displayVec(std::vector<int> &array)
{
    for(int i = 0; i < array.size(); i++)
        std::cout<<array[i]<<" ";
    std::cout<<std::endl;
}

void ordering(std::vector<int> &array)
{
    std::vector<int> newArray;
    int i, j;
    i = 0; //positive
    j = 0; //negative 
    while(newArray.size() < array.size())
    {
        if(i >= array.size() && j < array.size() && array[j] < 0)
        {
            newArray.push_back(array[j]);
            j++;
        }
        else if(j >= array.size() && i < array.size() && array[i] >= 0)
        {
            newArray.push_back(array[i]);
            i++;
        }
        else 
        {
            while(array[i] < 0)
                i++;
            while(array[j] >= 0)
                j++;
            if(j < array.size())
            newArray.push_back(array[j]);
            if(i < array.size())
            newArray.push_back(array[i]);
            j++;
            i++;
        }
    }

    displayVec(newArray);
}

int main()
{

    int arr[] = {1, 2, -4, 5, 6, -3, 6, -1, 9};
    std::vector<int> array(arr, arr + sizeof(arr)/sizeof(int));
    ordering(array);
    displayVec(array);
    return 0;
}
