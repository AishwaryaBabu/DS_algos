#include<iostream>
#include<vector>

int josephus(int N, int interval);
void printVector(std::vector<int> & fellows);
int main()
{
    int N = 6;
    int M = 3;

    int lastManStanding = josephus(N, M);
    std::cout<<"Last man standing is : "<<lastManStanding<<std::endl;
}

int josephus(int N, int interval)
{
    std::vector<int> fellows; 
//    vector<bool> fellowsGone;
    for(int i = 0; i < N; i++)
    {
        fellows.push_back(i);
  //      fellowsGone.push_back(false);
    }

//fellows.erase(fellows.begin() + i)
    int currentPos = 0;
    while(fellows.size() > 1)
    {
        printVector(fellows);
        currentPos += interval;
        if(currentPos < fellows.size())
        {   std::cout<<"inside if "<<currentPos<<std::endl;
            fellows.erase(fellows.begin() + currentPos);
        }
        else
        {
            std::cout<<"inside else"<<currentPos<<std::endl;
            while(currentPos >= fellows.size())
            {
                currentPos -= fellows.size();
            }
            fellows.erase(fellows.begin() + currentPos);
        }
    }
    return fellows[0];
}

void printVector(std::vector<int> & fellows)
{
    for(int i = 0; i < fellows.size(); i++)
        std::cout<<fellows[i]<<" ";
    std::cout<<std::endl;
}
