#include <priorityQueue.h>

//Require popping. Maintaining a pointer inside the class so as not to delete the node with the highest priority would be useful 

//insert O(1) => insert in any order and retrieve in O(N) by running through vector
priorityQueue::insert(unsigned int priority, const std::string& str)
{
    PriorityQueueNode x;
    x.priority = priority;
    x.data = str; 
    m_Queue.push_back(x);
}

std::string priorityQueue::next(void)
{
    int max = m_Queue[0].priority;
    int indexOfMax = 0;
    for(unsigned int i = 1; i < m_Queue.size(); i++)
    {
        if(m_Queue[i].priority > max)
        {
            max = m_Queue[i].priority;
            index = i;
        }
    }
    std::string nextData = m_Queue[index].data;
    m_Queue.erase(m_Queue.begin() + index);

    return nextData;
}

//insert O(N) => insert at end and do one run of reverse bubble sort and retrieve by locating the previous position O(1)

priorityQueue::insert(unsigned int priority, const std::string& str)
{
    PriorityQueueNode x;
    x.priority = priority;
    x.data = str;
    m_Queue.push_back(x);

    int i = m_Queue.size() - 1;
    while( i >= 1 && m_Queue[i].priority < m_Queue[i-1].priority)
    {
        //Swapping
        PriorityQueueNode temp = m_Queue[i-1];
        m_Queue[i-1] = m_Queue[i];
        m_Queue[i] = temp;
    }
}

std::string priorityQueue::next(void)
{
    std::string nextData = m_Queue[m_Queue.size()].data;
    m_Queue.pop_back();
    return nextData;
}

