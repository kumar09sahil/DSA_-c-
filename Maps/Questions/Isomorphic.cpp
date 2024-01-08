#include<bits/stdc++.h>
using namespace std;

//* T = O(n) : sum of length of s1+s2;
//* S = O(n) : number of uniqur character
bool IsIsomorphic(string s1, string s2)
{
    if(s1.length()!=s2.length())
        return false;

    unordered_map<char,char> record;
    for(int i=0;i<s1.size();i++)
    {
        if(record.find(s1[i])==record.end())
        {
            record[s1[i]] = s2[i];
        }
        else
        {
            if(record[s1[i]] != s2[i])
                return false;
        }
    }
    record.clear();
    for(int i=0;i<s2.size();i++)
    {
        if(record.find(s2[i])==record.end())
        {
            record[s2[i]] = s1[i];
        }
        else
        {
            if(record[s2[i]] != s1[i])
                return false;
        }
    }
    return true;
}

int main()
{
    string s1 = "abcdem";
    string s2 = "viouog";

    cout<<(IsIsomorphic(s1,s2)?"Yes":"No")<<endl;
}