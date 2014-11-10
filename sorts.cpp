#include <iostream>
#include <vector>

void displayVec(std::vector<int> & array)
{
    for(int i = 0; i < array.size(); i++)
        std::cout<<array[i]<<" ";
    std::cout<<std::endl;
}

void bubbleSort(std::vector<int> & array)
{
    for(int i = 0; i < array.size(); i++)
        for(int j = 0; j < array.size() - i - 1; j++)
        { 
            if(array[j] > array[j+1])
            {   
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
}

void insertionSort(std::vector<int> & array)
{
    for(int i = 0; i < array.size()-1; i++)
        for(int j = i+1; j > 0; j--)
        {
            if(array[j] < array[j-1])
            {
                int temp = array[j-1];    
                array[j-1] = array[j];
                array[j] = temp;
            }
        }
}

int main()
{
    int arr[] = {2, 5, 6, 3, 0, 9, -1, 7, 3};
    std::vector<int> array(arr, arr + sizeof(arr)/sizeof(int));

//    bubbleSort(array);
    insertionSort(array);
    displayVec(array);
    return 0;
}
