#ifndef PRIORITY_QUEUE_HXX
#define PRIORITY_QUEUE_HXX

#include <string>

class PriorityQueue {

    public:
        void insert(unsigned int priority, const std::string& str);
        std::string next(void);

    private:
        struct PriorityQueueNode()
        {
            unsigned int priority;
            std::string data;
        }

    std::vector<PriorityQueueNode> m_Queue;
};

#endif

