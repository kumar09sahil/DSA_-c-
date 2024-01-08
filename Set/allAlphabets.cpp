#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "adefGHIJKL+-mnopQRstuvwXyZ";
    set<char>s;
    for(auto letter : str)
    {
        if(letter >= 'a' && letter<= 'z' || letter>='A' && letter<='Z')
        {
            s.insert(tolower(letter));
        }
    }
    if(s.size() == 26)
    {
        cout<<"all alphabets are present"<<endl;
    }
    else
        cout<<"sorry ";
}