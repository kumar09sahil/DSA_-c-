#include<bits/stdc++.h>
using namespace std;
void spiral_order(vector <vector<int>>&matrix)
{
    int top=0;
    int bottom=matrix.size()-1;
    int left=0;
    int right=matrix[0].size()-1;
    int direction=0;
    while(top<=bottom && left<=right)
    {
        if(direction==0)
        {
            for(int col=left;col<=right;col++)
            {
                cout<<matrix[top][col]<<" ";
            }
            top++;
        }
        else if(direction==1)
        {
            for(int row=top;row<=bottom;row++)
            {
                cout<<matrix[row][right]<<" ";
            }
            right--;
        }
        else if(direction==2)
        {
            for(int col=right;col>=left;col--)
            {
                cout<<matrix[bottom][col]<<" ";
            }
            bottom--;
        }
        else if(direction==3)
        {
            for(int row=bottom;row>=top;row--)
            {
                cout<<matrix[row][left]<<" ";
            }
            left++;
        }
        direction=(direction+1) % 4;
    }
}

int main()
{
    int r,c;
    cout<<"enter the dimension of the matrix";
    cin>>r>>c;
    vector <vector<int>> matrix(r,vector <int> (c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>matrix[i][j];
        }
    } 

    spiral_order(matrix);
}