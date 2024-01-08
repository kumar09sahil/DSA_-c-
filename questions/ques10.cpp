#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,t;
    cout<<"enter the number ";
    cin>>num;
    int sum=0;
    int p=num;
    while(p>0)
    {
        t=p%10;
        sum+=t;
        p=p/10;
    }
    cout<<"sum of all the digit of "<<num<<" is "<<sum;
    return 0;

}