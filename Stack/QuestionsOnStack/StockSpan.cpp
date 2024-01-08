#include<bits/stdc++.h>
using namespace std;
//* time complexity = O(n); 
//* space complexity = O(n); 
vector<int> StockSpan(vector<int> v)
{ 
    //* Intuition: claculate previous greatest element;
            //*    store : (idx)-(prev_greatest_element_idx) as the answer
    vector<int>ans(v.size(),1);
    reverse(v.begin(),v.end());
    stack<int> st;
    st.push(0);
    for(int i=1;i<v.size();i++ )
    {
        while(!st.empty() && v[i]>v[st.top()])
        {
            ans[st.top()] = i-st.top();
            st.pop();
        }
        st.push(i);
    }
    reverse(ans.begin(),ans.end());

    return ans;
}

int main()
{
    vector<int> v ={100,80,60,70,60,75,85};
    vector<int>ans = StockSpan(v);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}