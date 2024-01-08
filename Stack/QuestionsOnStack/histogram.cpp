#include<bits/stdc++.h>
using namespace std;

int largestArea(vector<int> v)
{
    stack <int> st;
    st.push(0);
    int large = 0;
    for(int i=1;i<v.size();i++)
    {
        while(!st.empty() && v[i] < v[st.top()])
        {
            int ele = v[st.top()];
            st.pop();
            int next_small = i;
            int prev_small;
            if(st.empty()){
                prev_small = -1;
            }
            else
                prev_small = st.top();
            int area = ele*(next_small - prev_small - 1);
            //  cout<<ele<<" "<<next_small<<" "<<prev_small<<endl;
            large = max(large,area);
        }
        st.push(i);
    }

    while(!st.empty())
    {
        int ele = v[st.top()];
        st.pop();
        int next_small = v.size();
         int prev_small;
            if(st.empty()){
                 prev_small = -1;
            }
            else
                prev_small = st.top();
            int area = ele*(next_small-prev_small-1);
            // cout<<ele<<" "<<next_small<<" "<<prev_small<<endl;
            large = max(large, area );
        st.pop();
    }
    return large;
}

int main()
{
    vector<int> v ={2,1,5,6,2,3,0,2,1,8,12,2,3};
    cout<<largestArea(v);
}