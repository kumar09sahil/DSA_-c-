#include<bits/stdc++.h>
using namespace std;

bool canplaceQueen(int row, int col, vector<vector<char>>&chess)
{
    //*check if there are no queens attacking from the vertical
    for(int i=row-1;i>=0;i--)
    {
        if(chess[i][col] == 'Q')
            return false;
    }

    //*check if there are  queens in the left diagonal
    int j;
    for(int i=row-1, j=col-1; i>=0,j>=0 ; i--,j--)
    {
        if(chess[i][j] == 'Q')
            return false;
    }

    //*check if there are queens in the right diagonal
    for(int i=row-1,  j = col+1; i>=0,j<chess.size(); i--,j++)
    {
        if(chess[i][j] == 'Q')
            return false;
    }
    return true;
}

void NQueen(vector<vector<char>>&chess, int curr_row, int n)
{
    //* when there are no more rows left to place the queen : print the grid 
    if(curr_row == n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<chess[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"###\n";
        return;
    }

    //* self work: placing all queens on each column of a row to check all possibility
    for(int col=0;col<n;col++)
    {
        //*check if can place the queen on the particular col and no queen are attacking it
        if(canplaceQueen(curr_row,col,chess))
        {
            chess[curr_row][col]='Q';
            NQueen(chess,curr_row+1,n);
            chess[curr_row][col]='.';
        }
    }
}

int main()
{
    int N;
    cout<<"entet the number of queen : ";
    cin>>N;
    vector<vector<char>>chess(N,vector<char>(N,'.'));
    NQueen(chess,0,N);

}