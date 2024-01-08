#include<bits/stdc++.h>
using namespace std;

class HashTable{
public:
    vector<list<int> > hashtable;
    int bucket;

    HashTable(int size)
    {
        bucket = size;
        hashtable.resize(bucket);
    }

    int hashvalue(int key)
    {
        return key%bucket;
    }

    void addkey(int key)
    {
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }

    list<int>::iterator searchKey(int key)
    {
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(),hashtable[idx].end(),key);
    }

    void deletekey(int key)
    {
        int idx = hashvalue(key);
        if(searchKey(key)!=hashtable[idx].end())
        {
            hashtable[idx].erase(searchKey(key));
            cout<<key<<" is deleted"<<endl;
        }
        else
        {
            cout<<key<<" is not present in hashtable";
        }
    }
};

int main()
{
    HashTable H(10);
    H.addkey(5);
    H.addkey(4);
    H.addkey(3);
    H.deletekey(3);
    H.deletekey(3);
}