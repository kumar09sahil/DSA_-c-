#include<bits/stdc++.h>
using namespace std;
void spiral_matrix(vector <vector<int> > &matrix)
{
    int n=matrix.size();
    int top=0;
    int left=0;
    int bottom=n-1;
    int right=n-1;
    int value=1;
    int direction=0;
    while(top<=bottom && left<=right)
    {
        if(direction==0)
        {
            for(int col=left;col<=right;col++)
            {
                matrix[top][col]=value++;
            }
            top++;
        }
        else if(direction==1)
        {
            for(int row=top;row<=bottom;row++)
            {
                matrix[row][right]=value++;
            }
            right--;
        }
        else if(direction==2)
        {
            for(int col=right;col>=left;col--)
            {
                matrix[bottom][col]=value++;
            }
            bottom--;
        }
        else if(direction==3)
        {
            for(int row=bottom;row>=top;row--)
            {
                matrix[row][left]=value++;
            }
            left++;
        }
        direction=(direction+1)%4;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the square matrix ";
    cin>>n;
    vector <vector<int>> matrix(n,vector<int>(n));
    spiral_matrix(matrix);
    return 0;
}