//* Isomorphic means one to one mapping between two strings

#include<bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s1,string s2)
{
    vector <int> count1(128,-1);
    vector <int> count2(128,-1);
    if(s1.length()  != s2.length())  //*checking for same length
        return false;


    for(int i=0;i<s1.length();i++)
    {
        if(count1[s1[i]] != count2[s2[i]])  //* value at the count array same or not
            return false;
        else{
        //*updating the freq with the index i.e mapped elements
            count1[s1[i]] = i;
            count2[s2[i]] = i;
        }
    }
    return true;
}
int main()
{
    string s1,s2;
    s1 = "eggfg";
    s2 = "addnk";
    if(isIsomorphic(s1,s2))
        cout<<"Isomorphic";
    else
        cout<<"not Isomorphic";
        return 0;
}