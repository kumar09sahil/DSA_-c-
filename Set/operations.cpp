#include<bits/stdc++.h>
using namespace std;

int main()
{
    // set<int,greater <int>> set1;
    set<int> set1;
    set1.insert(5);
    set1.insert(8);
    set1.insert(66);
    set1.insert(16);
    set1.insert(86);
    set1.insert(6);
    cout<<set1.size()<<endl;
    set1.insert(5);
    cout<<set1.size()<<endl;

    //* traversing the set;
    for(auto itr = set1.begin(); itr!=set1.end() ; itr++)
    {
        cout<<*itr<<" ";
    } 
    cout<<endl;

   
    // set1.erase(6);
    // auto itr = set1.begin();
    // advance(itr,1);
    // set1.erase(itr);

    auto start_pos = set1.begin();
    advance(start_pos,2);
    auto end_pos = set1.begin();
    advance(end_pos,5);
    set1.erase(start_pos,end_pos);
    
    //* traversing using for each 
    for(auto value: set1)
    {
        cout<<value<<" ";
    }
    cout<<endl;

}