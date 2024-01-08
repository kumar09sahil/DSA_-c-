#include<bits/stdc++.h>
using namespace std;

int maxOnes(vector<vector<int>> &v)
{
    int maxOne=INT_MIN;
    int max_idx=-1;
    int column=v[0].size();
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[0].size();j++)
        {
            if(v[i][j]==1)
            {
                int numberofOnes=column-j;
                if(numberofOnes>maxOne)
                {
                    maxOne=numberofOnes;
                    max_idx=i;
                }break;
            }
        }
    }
    return max_idx;
}
int main()
{
    int r,c;
    cout<<"enter the dimension";
    cin>>r>>c;
    vector <vector<int>> vec(r,vector<int>(c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>vec[i][j];
        }
    }

    int ans = maxOnes(vec);
    cout<<"max row "<<ans;

}