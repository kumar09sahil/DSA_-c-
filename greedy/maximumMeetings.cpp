#include<bits/stdc++.h>
using namespace std;

class meeting{
    public:
    int start;
    int end;
    int idx;
};

bool comp(meeting m1, meeting m2)
{
    return m1.end < m2.end;
}

void maxmMeeting(vector<meeting>&arr)
{
    sort(arr.begin(),arr.end(),comp);

    cout<<arr[0].idx<<" ";
    int lastEnd = arr[0].end;
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i].start>=lastEnd)
        {
            cout<<arr[i].idx<<" ";
            lastEnd=arr[i].end;
        }
    }
}

int main()
{
    int n;
    cout<<"enter the number of total meetings";
    cin>>n;
    int i=0;
    vector<meeting>arr;
    while(n--)
    {
        meeting m;
        int s,e;
        i++;
        cin>>s>>e;
        m.start = s;
        m.end = e;
        m.idx = i;
        arr.push_back(m);
    }
    maxmMeeting(arr);
    return 0;
}