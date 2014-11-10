#include <iostream>
#include <vector>

class Stack 
{

    vector<int> stack_;
    int top_;
    int length_;

    public:   
        Stack();
        bool isEmpty();
        int lengthOfStack();
        void push();
        void pop();

};

Stack::Stack()
{
    top_ = -1;
}

Stack::push(int item)
{
    stack_.push_back(item);
    top_ += 1;
}

Stack::
int Stack::lengthOfStack()
{
    return stack_.size();
}

int main() 
{
}
