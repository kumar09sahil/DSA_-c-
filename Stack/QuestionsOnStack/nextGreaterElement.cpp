#include<bits/stdc++.h>
using namespace std;

vector<int> NextGreaterElement(vector<int> v)
{
    vector<int> ans(v.size(),-1);
    stack<int>st;
    st.push(0);
    for(int i=1;i<v.size();i++)
    {
            while(!st.empty() && v[i]>v[st.top()])
            {
                ans[st.top()] = v[i];
                st.pop();
            }
            st.push(i); 

            
    }

    //* not mandatory as already initialized above 
    // if(!st.empty())
    // {
    //     ans[st.top()]=-1;
    //     st.pop();
    // }
    return ans;
}

int main()
{
    vector<int> v ={4,3,9,1,6,8,2};
    vector<int> ans = NextGreaterElement(v);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}