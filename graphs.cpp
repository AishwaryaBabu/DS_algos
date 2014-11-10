#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;

int main(int argc, char* argv[])
{
    string inputFilename = "g7.data";
    fstream inputFile; 

/*    if(argc>=2)
    {
       
    }
  */
  
//    int N = 32;
    int N = 7;
    int num1, num2;
    //vector<int> oneD(N,0);
    //vector< vector <int> > matrix(N, std::vector<int>(N, 0)) ; 

    int matrix[N][N];

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            matrix[i][j] = 0;

    inputFile.open(inputFilename.c_str(), fstream::in);

    while(inputFile>>num1>>num2){
        matrix[num1-1][num2-1] = 1;
        matrix[num2-1][num1-1] = 1;
    }

    inputFile.close();


    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }        

    return 0;
}
