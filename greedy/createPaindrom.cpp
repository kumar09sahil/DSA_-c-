#include<bits/stdc++.h>
using namespace std;

bool ispossible(unordered_map<int,int>&mp)
{
    int count=0;
    for(int i=0;i<=9;i++)
    {
        if(mp[i]%2!=0) count++;
        if(count>1)
            return false;
    }
    return true;
}

void plaindrome(string num)
{
    unordered_map<int,int>mp;
    int l=num.size();
    for(int i=0;i<l;i++)
    {
        mp[num[i]-'0']++;
    }
    if(!ispossible(mp))
    {
        cout<<"not possible "<<endl;
        return;
    }
    vector<char>v(l);
    int front = 0;
    for(int i=9;i>=0;i--)
    {
        if(mp[i]%2!=0)
        {
            v[l/2]=char(i+48);
            mp[i]--;
        }
        while(mp[i]>0)
        {
            v[front]=char(i+48);
            mp[i]--;
            v[l-front-1] = char(i+48);
            mp[i]--;
            front++;
        }
    }
    string ans = "";
    for(int i=0;i<l;i++)
    {
        ans+=v[i];
    }
        cout<<ans<<endl;
}

int main()
{
    plaindrome("97851378513");
    return 0;
}