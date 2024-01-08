#include<bits/stdc++.h>
using namespace std;
void prnt(int n,int num,int c)
{
    
    if(n>num)
        return;
    else if(n<0 && c==0)
    {
        c++;
        prnt(n+5,num,c);
        cout<<n<<" ";
    }
    else
    {
        if(c>0)
        {
            prnt(n+5,num,c);
            cout<<n<<" ";
        }
        else
        {
            prnt(n-5,num,c);
            cout<<n<<" ";
        }
        
    }
}
int main()
{
    int  c= 0;
    prnt(10,10,c);
    return 0;
}