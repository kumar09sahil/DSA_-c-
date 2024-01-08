#include<bits/stdc++.h>
using namespace std;

bool knightTour(vector<vector<int>>& chess, int row, int col, int count, int n)
{
    if(row<0 || col<0 || row>=n || col>=n ||  chess[row][col]>=0 ) return false;

    if(count==(n*n)-1)
    {
        chess[row][col]=count;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<chess[i][j]<<"\t";
            }
            cout<<"\n";
        }
        return true;
    } 

    chess[row][col]=count;
    if(knightTour(chess,row-2,col-1,count+1,n)) return true;
    if(knightTour(chess,row-2,col+1,count+1,n)) return true;
    if(knightTour(chess,row+2,col-1,count+1,n)) return true;
    if(knightTour(chess,row+2,col+1,count+1,n)) return true;
    if(knightTour(chess,row-1,col+2,count+1,n)) return true;
    if(knightTour(chess,row+1,col+2,count+1,n)) return true;
    if(knightTour(chess,row-1,col-2,count+1,n)) return true;
    if(knightTour(chess,row+1,col-2,count+1,n)) return true;
    chess[row][col]=-1;
    return false;
}
int main()
{
    int n=8;
    vector<vector<int>>chess(n,vector<int>(n,-1));
    knightTour(chess,0,0,0,n);
}