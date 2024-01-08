//* there are two methods one : using an frequency array ; but takes extra space
// *              method 2 : using an unordered map ; hence better and efficient;

#include<bits/stdc++.h>
using namespace std;

bool CanMakeStringEqual(vector<string> s)
{
    unordered_map<char,int> record;
    for(int i=0;i<s.size();i++)
    {
        for(auto ele : s[i])
        {
            record[ele]++;
        }
    }
    for(auto pair:record)
    {
        if(pair.second % s.size() != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // vector<string> s = {"collegeee","coll","collegge"};
    vector<string> s = {"wallahah","ah","wall"};
    cout<<CanMakeStringEqual(s);
}