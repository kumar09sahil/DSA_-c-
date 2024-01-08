#include<bits/stdc++.h>
using namespace std;
int main()
{
    // map<string,int, greater<string>>phoneBook;
    map<string,int>phoneBook;
    phoneBook["saloni"] = 65466555;
    phoneBook["nikhil"] = 84521695;
    phoneBook["shantanu"] = 94587155;
    phoneBook["keish"] = 7412585;

    for(auto element:phoneBook)
    {
        cout<<element.first<<" : "<<element.second<<endl;
    }
    phoneBook.erase("nikhil");
    // phoneBook.erase(phoneBook.find("nikhil"));
    // phoneBook.erase(phoneBook.find("nikhil"),phoneBook.end());
    cout<<endl;
    for(auto itr = phoneBook.begin() ; itr!=phoneBook.end();itr++)
    {
        cout<<itr->first<<" : "<<itr->second<<endl;
    }
    cout<<"size : "<<phoneBook.size()<<endl;
    cout<<"max size : "<<phoneBook.max_size()<<endl;

}