#include<bits/stdc++.h>
using namespace std;

int cpuExecution( vector<char> v , int n)
{
    unordered_map<char,int>charFreq; //* to store the frequecncy of character
    for(int i=0;i<v.size();i++)
    {
        charFreq[v[i]]++;
    }

    priority_queue<int>pq; //* storing all the freUENCY IN THE max heao
    for(auto e : charFreq)
    {
        pq.push(e.second);
    }

    int totalTime = 0;
    while(!pq.empty())
    {
        vector<int>temp; //* temperory vector to store freq
        //* looping to calc time unit
        for(int i=0; i<=n ; i++)
        {
            //* if heap not empty
            if(!pq.empty())
            {
                int freq = pq.top();
                pq.pop();
                //* check if task is present or not to be done
                if(freq>1)
                {
                    temp.push_back((freq-1));
                }
            }

            totalTime++;
            if(pq.empty() && temp.empty())
            {
                return totalTime;
            }
        }
        //* copying the task from temp to the heap 
        for(auto it : temp)
        {
            pq.push(it);
        }
        
    }
    return totalTime;
}

int main()
{
    vector<char> v = {'A','A','A','A','B','B','B'};
    cout<<cpuExecution(v,2);;
}