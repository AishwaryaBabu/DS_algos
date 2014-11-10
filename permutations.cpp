#include<iostream>
#include<string>

using namespace std; 


void permutation(string s, int k, int n)
{
    if(k == n-1)
        cout<<s<<endl;
    else
    {
        for(int i = k; i < n; i++)
        {
            /*Swapping the elements*/
            char temp = s[k];
            s[k] = s[i];
            s[i] = temp;

            permutation(s, k+1, n);

            temp = s[k];
            s[k] = s[i];
            s[i] = temp;
        }
    }

}

int main(int argc, char* argv[])
{

    string permString;
    cout<<"Enter string : "<<endl;
    cin>> permString;
    
    int length = permString.length();
    permutation(permString, 0, length);

    return 0;
}
