/* Brute force: 
    for(i = 0; i < n; i++)
        if(X % i == 0)
            return false;
    return true;
*/


#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

bool primalityTest(int n)
{
    int randNum;
    int z ;
    int large = n-1;    
    
    for(int i = 1; i <= large; i++)
    {
        randNum = rand() % (n-1);
        z = pow(randNum, n-1);
        if(z % n != 1)
            return false;            
    }

    return true;
}

int main()
{
    int n;
    cout<<"Enter number : "<<endl;
    cin >> n;
    
    if(primalityTest(n))
        cout<<"Is prime"<<endl;
    else
        cout<<"Is not prime"<<endl;

    return 0;
}
