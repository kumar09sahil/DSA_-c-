#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string> inviteList;
    int n;
    cout<<"enter the number of people";
    cin>>n;
    string name;
    while(n--)
    {
        cin>>name;
        inviteList.insert(name);
    }

    for(auto name : inviteList)
    {
        cout<<name<<endl;
    }
}