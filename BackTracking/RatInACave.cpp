#include<bits/stdc++.h>
using namespace std;

bool cango(int a,int b , vector<vector<int>> &maze,int n)
{
    return (a<n && b<n && a>=0 && b>=0) && maze[a][b]==1;
}
int DifferentPossiblePath(vector<vector<int>> &maze, int i, int j, int N)
{
    if(i==N-1 && j==N-1)
        return 1;
    
    int ans=0;

    maze[i][j]=2;

    //* upwardward
    if(cango(i-1,j,maze,N)) 
        ans+=DifferentPossiblePath(maze,i-1,j,N) ;

    //* downward
    if(cango(i+1,j,maze,N))
        ans+=DifferentPossiblePath(maze,i+1,j,N);
    
    //* rightward
    if(cango(i,j+1,maze,N))
        ans+=DifferentPossiblePath(maze,i,j+1,N);
    
    //* leftward
    if(cango(i,j-1,maze,N)) 
        ans+=DifferentPossiblePath(maze,i,j-1,N);

    maze[i][j]=1;
    return ans;
}

int main()
{
    vector<vector<int>> Maze = {{1,1,1,1},
                                {0,1,0,1},
                                {0,1,1,1},
                                {0,1,1,1}};
    cout<<DifferentPossiblePath(Maze,0,0,4);

}