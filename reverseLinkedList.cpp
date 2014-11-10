#include <iostream>
#include <vector>

struct node {
    int data;
    struct node * next;
};

void reverseRecursive(struct node ** head)
{
    
    struct node * first;
    struct node * rest;

/*zero nodes*/
    if(*head == NULL)
        return;

    first = *head;
    rest = first->next;

/*Single node*/
    if(rest == NULL)
        return;

/*Recursion for the rest*/
    reverseRecursive(&rest);
//Switch the link
    first->next->next = first;    
    first->next = NULL;
    *head = rest;

}

void reverse(struct node ** head)
{
    if(head == NULL)
        return;

    struct node * prev, * curr, * next;
    prev = NULL;
    curr = *head;
    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}

void createLinkedList(std::vector<int> & arr, struct node **head)
{
    int N  = arr.size();
//    std::cout<<"length of the vec is: "<<N<<std::endl;
    int i = 0;
    struct node *current = *head;
    while( i < N )  {
        current->data = arr[i];
        current->next = new struct node;
        current = current->next;
        ++i;
    }
    delete current;
    current = NULL; // preventing dangling pointer
    return;
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

    createLinkedList(array, &head);
    displayList(head);
//    reverse(&head);
    reverseRecursive(&head);
    displayList(head);
    return 0;
}
