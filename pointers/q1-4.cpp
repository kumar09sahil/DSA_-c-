#include<bits/stdc++.h>
using namespace std;
void  firstandlastandcount(string s,char ch , char *f, char *l, int *count)
{
    *f=s[0];
    *l=s[s.size()-1];
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==ch)
        (*count)++;
    }

}
int main()
{
    string s ="twitter";
    char ch = 't';
    char f=-1;
    char l=-1;
    int count = 0;
    firstandlastandcount(s, ch, &f, &l, &count);
    cout<<"first letter is "<<f<<" "<<"last letter is "<<l<<" "<<"count is "<<count;
    return 0;
}