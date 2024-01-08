#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int c=0;
    int a=12935;
    int sec_last=(a/10)%10;
    int p=a;
    while(p>0)
    {
        c++;
        p=p/10;
    }
    c--;
    int f=a/pow(10,c);
    // cout<<f;
    // cout<<sec_last;
    int sum=sec_last+f;
    cout<<sum;
    return 0;
    
}