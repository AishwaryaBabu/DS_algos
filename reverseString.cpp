#include <iostream>
#include <string>
#include <vector>

void reverseFullString(std::string str); //em si sihT
void reverseWordsInPlace(std::string str); //sihT si em
void reverseStringWithWords(std::string str);//em si sihT
void reverseWordPositions(std::string str); //me is This

int main()
{
    std::string s = "This is me";
    reverseFullString(s); //works
    reverseWordsInPlace(s); //works 
    reverseStringWithWords(s); //works
    reverseWordPositions(s); //works
    return 0;
}

void reverseWordsInPlace(std::string str)
{
    std::string newString = str;
    int i = 0;
    int k = 0;
    while(k < str.length())
    {
        if(str[i] == ' ')
        {
            newString[k] = ' ';
            k++;
            i++;
        }

        else
        {
            std::vector<char> temp;
            
            while(str[i] != ' ' && i < str.length())
            {
                temp.push_back(str[i]); 
                i++;
            }

            for(int j = temp.size()-1; j>=0; j--)
            {
                newString[k] = temp[j]; 
                k++;
            }
        }
    }
    std::cout<<newString<<std::endl;
}

void reverseStringWithWords(std::string str)
{
    std::string newString = str;
    for(int i = str.length()-1; i>=0; i--)
    {
        if(str[i] == ' ')
        {
            newString[str.length()-1-i] = ' ';
        }
        else
        {
            newString[str.length()-1-i] = str[i];           
        }
    }
    std::cout<<newString<<std::endl;
}

void reverseWordPositions(std::string str)
{
    std::string newString = str;
    int i = 0;
    int k = 0;
    while(k < str.length())
    {
        if(str[i] == ' ')
        {
            newString[str.length()-1-k] = ' ';
            k++;
            i++;
        }

        else
        {
            std::vector<char> temp;
            
            while(str[i] != ' ' && i < str.length())
            {
                temp.push_back(str[i]); 
                i++;
            }

            for(int j = temp.size()-1; j>=0; j--)
            {
                newString[str.length()-1-k] = temp[j]; 
                k++;
            }
        }
    }
    std::cout<<newString<<std::endl;
}
void reverseFullString(std::string str)
{
    for(int i = 0; i < str.length()/2 ; i++)
    {
        //Swapping
        char temp;
        temp = str[i];
        str[i] = str[str.length()-1-i];
        str[str.length() - 1 -i] = temp;
    }
    std::cout<<str<<std::endl;
}
