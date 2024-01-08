#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]= {4,6,3,6,2};
    int sum=0;
    for(int i=0; i<5; i++)
    {
        sum = sum+ *(a+i);
    }
    cout<<"total sum is "<<sum;
    return 0;
}