//* this question is similiar to the frog jump problem 

#include<bits/stdc++.h>
using namespace std;
int Gridpath(int m, int n,int i,int j)
{
    if(i==m-1 && j==n-1)
    return 1;
    if(i==m || j==n)
    return 0;
    return Gridpath(m,n,i,j+1) + Gridpath(m,n,i+1,j);

}
int main()
{
    int ans = Gridpath(2,3,0,0);
    cout<<"total path "<<ans;
    return 0;
}