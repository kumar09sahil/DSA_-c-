#include<bits/stdc++.h>
using namespace std;
int RemoveOccurence(string str, int idx, char x)
{
    if(idx>=str.length())
        return 0;
    return (str[idx]=='x'?"": std::string(str[idx]) ) + RemoveOccurence(str,idx+1,x);

}
int main()
{
    string s = "sahil";
    string ans =RemoveOccurence(s,0,'a');
    cout<<ans;
    return 0;
}