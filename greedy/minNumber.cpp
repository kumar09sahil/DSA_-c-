#include<bits/stdc++.h>
using namespace std;

int minNumber(int s, int d)
{
    if(9*d < s)
    {
        return -1;
    }
    vector<int>num(d,0);
    int i;
    for( i=d-1;i>0;i--)
    {
        if(s>9)
        {
            num[i] = 9;
            s -= 9;
        }
        else
        {
            break;
        }
    }
    if(i==0) 
        num[i] = s;
    else
    {
        num[0]=1;
        num[i] = s-1;
    }
    int ans=0;
    for(int i=0;i<num.size();i++)
    {
        ans = ans*10+num[i];
    }
    return ans;

}

int main()
{
    int d,s;
    cin>>d>>s;
    cout<<minNumber(s,d);
}