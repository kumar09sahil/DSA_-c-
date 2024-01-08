#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string str1, string str2)
{
    vector <int> count(26,0);
    if(str1.length() != str2.length())
        return false;
    
    for(int i=0;i<str1.size();i++)
    {
        int idx = str1[i] -'a';
        count[idx]++;
        int idx2 = str2[i] - 'a';
        count[idx2]--;
    }
    for(int i=0;i<count.size();i++)
    {
        if(count[i] > 0 || count[i] < 0)
        return false;
    }
    return true;
}
int main()
{
    string str1 = "kbo";
    string str2 = "book";
    if(isAnagram(str1,str2))
        cout<<"yes";
    else 
        cout<<"no";
    return 0;
}