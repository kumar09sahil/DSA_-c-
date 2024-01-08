#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &v)
{
    int n=v.size();

    // to find the transpose
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(v[i][j],v[j][i]);
        }
    }

    // to reverse the rows in vector 
    
    for(int i=0;i<n;i++)
    {
        reverse(v[i].begin(),v[i].end());
    }
    return;
}
int main()
{
    int n;
    cout<<"enter the dimension of square matrix";
    cin>>n;
    vector <vector<int> > vec(n, vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>vec[i][j];
        }
    }
    rotate(vec);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }


}