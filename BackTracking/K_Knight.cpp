#include<bits/stdc++.h>
using namespace std;

bool canplaceKnight(vector<vector<char>>& board, int row, int col)
{
    int count = 0;

    int i=row-2, j=col-1;
    if(i>=0 && j>=0 && board[i][j]=='k')
        return false;
    
    i=row-2, j=col+1;
    if(i>=0 && j>=0 && board[i][j]=='k')
        return false;
    
    i=row-1, j=col-2;
    if(i>=0 && j>=0 && board[i][j]=='k')
        return false;

    i=row-1, j=col+2;
    if(i>=0 && j>=0 && board[i][j]=='k')
        return false;
    

    return true;
}

void k_Knight(vector<vector<char>>& board, int row, int col, int k)
{
    if(k==0)
    {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"###\n";
        return;
    }

    if(col==board[0].size())
        return k_Knight(board,row+1,0,k);

    if(row == board.size())
        return ;
    for(int i=row;i<board.size();i++ )
    {
        for(int j=(row == i?col:0);j<board[0].size();j++)
        {
            if(canplaceKnight(board,i,j))
            {
                board[i][j]='k';
                k_Knight(board,i,j+1,k-1);
                board[i][j]='.';
            }   
        }
    }
}

int main()
{
    vector<vector<char>> board(4,vector<char>(3,'A'));
    k_Knight(board,0,0,5);

}