#ifndef TEMPLATE4LL_H
#define TEMPLATE4LL_H

template<class T>
struct Node{
        T data;
        Node<T> * next;
}

template<class T> class LinkedList{

    Node<T> * head = NULL;

    public:
        Node();
        Node(T data);
        void insert(T& data);
        void deleteNode(T& data);
};

template<class T>
void LinkedList<T>::insert(T& data)
{
    if(head == NULL)
    {
        head = new Node<T>;
        head->data = data;
        head->next = NULL;
    }
    else
    {
        Node<T>* temp;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new Node<T>;
        temp = temp->next;
        temp->data = data;
        temp->next = NULL;
    }
}
#endif
