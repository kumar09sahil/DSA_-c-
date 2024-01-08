#include<bits/stdc++.h>
using namespace std;
int max_sequence(string s, int k)
{
    int zero_count=0;
    int i=0,j=0;
    int max_length=0;
    for(;j<s.size();j++)
    {
        if(s[j]=='0'){
        zero_count++;
        }
        while(zero_count > k)
        {
            if(s[i]=='0')
                zero_count--;
            i++;
        }
        max_length = max(max_length, j-i+1);
        
    }
    return max_length;
}
int main()
{
    string s = "0001101011";
    cout<<max_sequence(s,2);
    return 0;
}