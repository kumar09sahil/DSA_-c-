#include<bits/stdc++.h>
using namespace std;

unordered_set<int> PossibleMarks(int n, int p ,int q)
{
    unordered_set<int>ans;
    int correct = 0;
    int incorrect = 0;
    int unattended = 0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            correct = i;
            incorrect =j;
            unattended = n-(i+j);
            if(unattended>=0)
            {
                int marks = p*correct + (q*incorrect);
                ans.insert(marks);
            }
            else{
                break;
                }
        }
    }
        return ans;

}

int main()
{
    unordered_set<int> ans = PossibleMarks(2,1,-1);
    for(auto ele : ans)
    {
        cout<<ele<<" ";
    }
}