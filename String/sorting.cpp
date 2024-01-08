#include<bits/stdc++.h>
using namespace std;
void cout_sort_string(string &str)
{
    vector <int> count(26,0);

    //* creating the count array
    for(int i=0;i<str.length();i++)
    {
        int idx = str[i] - 'a';
        count[idx]++;
    }

    //* sorting the string
    int j=0;
    for(int i=0;i<count.size();i++)
    {
        while(count[i]--)
        {
            str[j++]= i+ 'a';
        }
    }
   
}
int main()
{
    string str="ahbcefrutjslnklmuytiwqzxcploiu";
    cout_sort_string(str);
    cout<<str;
    return 0;
}