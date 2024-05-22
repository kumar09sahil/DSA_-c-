#include<bits/stdc++.h>
using namespace std;

class item{
    public:
    int value;
    int weight;
};

bool comp(item i1, item i2)
{
    int v_w_1 = static_cast<double>(i1.value)/i1.weight;
    int v_w_2 = static_cast<double>(i2.value)/i2.weight;
    return v_w_1 > v_w_2;
}

int fractionalKnapsack(int weight, vector<item>items)
{
    sort(items.begin(),items.end(),comp);
    int ans=0;
    for(auto item:items)
    {
        if(item.weight<=weight)
        {
            ans+= item.value;
            weight -= item.weight;
        }
        else{
            double valueperunitweight = static_cast<double>(item.value)/item.weight;
            cout<<valueperunitweight<<endl;
            ans += weight*valueperunitweight;
            weight=0;
        }
    }
    return ans;
}

int main()
{
    int n,w;
    vector<item>items;
    cout<<"enter the number of items and capacity"<<endl;
    cin>>n>>w;

    for(int i=0;i<n;i++)
    {
        item it;
        int v,w;
        cin>>v>>w;
        it.value=v;
        it.weight = w;
        items.push_back(it);
    }
    cout<<fractionalKnapsack(w,items);
    return 0;
}