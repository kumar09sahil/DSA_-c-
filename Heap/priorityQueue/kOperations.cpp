#include<bits/stdc++.h>
using namespace std;
int performOperation(vector<int> num, int k)
{
    priority_queue<int,vector<int>,greater<int>> pq; //* min heap
    for(int i=0;i<num.size();i++)
    {
        pq.push(num[i]);
    }
    for(int i=0;i<k;i++)
    {
        int num1 = pq.top();
        pq.pop();
        int num2 = pq.top();
        pq.pop();
        pq.push(num1*num2);
    }
    while(pq.size()!= 1)
    {
        pq.pop();
    }
    return pq.top();
}
int main()
{
    vector<int> num ;
    int n,numb;
    cout<<"enter the size of array ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>numb;
        num.push_back(numb);
    }
    int k;
    cout<<"enter the number of operations ";
    cin>>k;
    cout<<" largest elemt "<<performOperation(num,k);
}