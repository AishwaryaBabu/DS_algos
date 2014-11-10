#include <iostream>
#include <vector> 
struct node {
    int data;
    struct node * next;
};

void reverse(struct node* & head)
{
    struct node * prev, * curr, * next;
    prev = NULL;
    curr = head;
    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

void createLinkedList(std::vector<int> & arr, struct node &head)
{
    int N  = arr.size();
    int i = 0;
    struct node *current = &head;
    while( i < N )  {
        current->data = arr[i];
        if(i < N-1) 
        {
            current->next = new struct node;
            current = current->next;
        }
        else
        {
            current->next = NULL;
        }
        ++i;

    }

    current = NULL;
    delete current;
    return;
    /*for(int i = 0; i < arr.size(); i++)
      {
      struct node * current = new struct node;
      current->data = arr[arr.size()-i-1];
      current->next = head;
      head = current;
      }*/
}


void displayList(struct node * head)
{
    struct node * temp;
    temp = head;
    while(temp->next != NULL)
    {
        std::cout<<temp->data<<std::endl;
        temp = temp->next;
    }
    std::cout<<temp->data<<std::endl;
}

int main()
{
    int arr[] = {3, 4, 5, 6, 7};
    std::vector<int> array(arr, arr+sizeof(arr)/sizeof(int));
    struct node * head = new struct node;

    createLinkedList(array, *head);
    displayList(head);
    reverse(head);

    std::cout<<"here"<<std::endl;
    displayList(head);
    return 0;
}  


