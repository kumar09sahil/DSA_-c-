#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ele,ch,target=0;
    int pair=0;
    vector <int> v;
    do
    { 
        cout<<"enter the element ";
        cin>>ele;
        v.push_back(ele);
        cout<<"enter your choice ";
        cin>>ch;
    } while (ch==1);
    cout<<"enter the target sum";
    cin>>target;

    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]+v[j]==target)
            pair++;
        }
    }
    cout<<"pair is "<<pair;
    return 0;
}