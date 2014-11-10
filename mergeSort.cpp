/*
Merge sort

recursively call merge sort 
within merge sort call merge 

mergeSort() will keep subdividing the arrays 
merge() will combine the two arrays returned from sorting the subdivided arrays 
*/


#include <iostream>
#include <vector>
using namespace std;

void displayArr(vector<int> & arr)
{
    for(int i = 0; i < arr.size(); i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void topDownMerge(vector<int> &arr, int left, int middle, int right)
{
    int i = left;
    int j = middle+1;
        
    vector<int> auxiliaryArr;

//Making a copy
    for(int iter = 0; iter < arr.size(); iter++)
    {
        auxiliaryArr.push_back(arr[iter]);
    }

    for(int k = left; k <= right; k++)
    {
        if(i > middle)
            arr[k] = auxiliaryArr[j++];
        else if(j > right)
            arr[k] = auxiliaryArr[i++];
        else if(auxiliaryArr[i] > auxiliaryArr[j])
            arr[k] = auxiliaryArr[j++];
        else
            arr[k] = auxiliaryArr[i++];
    }
}

void topDownMergeSort(vector<int> &arr, int left, int right)
{
    if(left < right)
    {
        int middle = (left + right)/2;
        topDownMergeSort(arr, left, middle);
        topDownMergeSort(arr, middle+1, right);
        topDownMerge(arr, left, middle, right);
    }
}

void bottomUpMerge(vector<int >&arr)
{

}

void bottomUpMergeSort(vector<int > &arr)
{
    for(int width = 1; width < arr.size(); width += width)
        for(int j = 0; j < arr.size() - width; j += width+width)
        {
            int left = j;
            int middle = j + width - 1;
            int right = j + 2*width - 1;
            bottomUpMerge(arr, left, middle, right);
        }
}

int main()
{
    int array[] = {7, 3, 5, 9, 13, 15, 19, 6, 3, 2, 0, 1};
    vector<int > arr(array, array + sizeof(array)/sizeof(int));
    topDownMergeSort(arr, 0, arr.size()-1);
    displayArr(arr);
    return 0;
}
