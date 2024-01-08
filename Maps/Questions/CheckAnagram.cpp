#include<bits/stdc++.h>
using namespace std;


//* T = o(N) : N sum of length of s1+s2;
bool checkAnagram(string s1, string s2)
{
    //* if length of 2 string not same then its not anagram
    if(s1.length()!=s2.length())
        return false;
    
    unordered_map<char,int> record;
    for(char c : s1)
    {
        record[c]++; //* storing character and their frequencies in record;
    }
    for(char c : s2)
    {
        if(record.find(c)==record.end())
            return false;
        else
            record[c]--;
    }
    for(auto pair:record)
    {
        if(pair.second!=0)
            return false;
    }
    return true;
}

int main()
{
    string s1 = "triangle";
    string s2 = "icntegral";
    checkAnagram(s1,s2)?cout<<"yes":cout<<"NO";
}