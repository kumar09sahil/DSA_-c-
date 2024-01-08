#include<bits/stdc++.h>
using namespace std;
void longest_common_prefix_1(vector <string> &v)
{
    sort(v.begin(),v.end()); //* sorting the array
    string s1 = v[0];
    string s2 = v[v.size()-1];
    cout<<"longest common prefix : ";
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i] == s2[i])
            cout<<s1[i];
        else
            break;
    }
}

void longest_common_prefix_2(vector <string> &v)
{
    string s1 = v[0];
    int ansLen = s1.size();
    for(int i=1;i<v.size();i++)
    {
        int j=0,k=0;
        int len=0;
        while(j< s1.length() && k < v[i].length())
        {
            string s2 = v[i];
            if(s1[j]!=s2[k])
                break;
            else{
                len++;
                j++,k++;
            }
        }
        if(len<ansLen)
            ansLen=len;
    }
    cout<<"longest common prefix: "<<s1.substr(0,ansLen);
}
int main()
{
    vector <string> v = {"ant","anti","anthem","apple"};
    // longest_common_prefix_1(v);
    longest_common_prefix_2(v);
    return 0;
}