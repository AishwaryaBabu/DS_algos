#include <iostream>
#include <vector>

using namespace std;

int 3Way(vector<int> & list, int lower, int upper)
{
    int pivot = list[lower];
    int lt = lower;
    int gt = upper;
    int i = lower;

    while(i<= gt)
    {
        if(list[i] < pivot)
        {
            int temp = list[i];
            list[i] = list[lt];
            list[lt] = temp;
            i++; 
            lt++;
        }
        else if(list[i] > pivot)
        {
            int temp = list[i];
            list[i] = list[gt];
            list[gt] = temp;
            gt--;
        }
        else    
            i++;
    }
    3Way(list, lower, lt-1);
    3Way(list, gt+1, upper);
}

int partition(vector<int> & list, int lower, int upper)
{
    int pivot = list[lower];
    int i, j;
    i = lower+1;
    j = upper;

    while(i <= j)
    {
        while(list[i] < pivot)
            i++;
        while(list[j] > pivot)
            j--;
        if(i <= j)
        {
            int temp = list[i];
            list[i] = list[j];
            list[j] = temp;
            i++;
            j--;
        }
    }

    /* Swapping pivot with element in the desired position */
    int temp = list[i];
    list[i] = list[lower];
    list[lower] = temp;
    
    return i;
}

void quicksort(vector<int> & arr, int left, int right)
{
    if(left < right)
    {
        int k = partition(arr, left, right)
        quicksort(arr, left, k-1);
        quicksort(arr, k+1, right);
    }
}
void displayVec(vector<int >& list)
{
    for(int i = 0; i < list.size(); i++)
    {
        cout<<list[i]<<" ";
    }
    cout<<endl;
}

int main()
{

    int arr[] = {65, 70, 75, 80, 85, 60, 55, 50, 45};
    vector<int> list(arr, arr + sizeof(arr)/ sizeof(int));
    int k = 5;

    int position;
    int lower, upper;
    lower = 0;
    upper = list.size()-1;
    
    position = partition(list, lower, upper);
    while(position <= k)
    {
        displayVec(list);
        if(position == k)
            break;
        else if(position < k)
        {
            lower = position+1;
            position = partition(list, lower, upper);
        }
        else
        {
            upper = position;
            position = partition(list, lower, upper);
        }
    }

    cout<<"The element is: "<<list[position]<<endl;
    return 0;
}
