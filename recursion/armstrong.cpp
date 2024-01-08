#include<bits/stdc++.h>
using namespace std;
 int Power(int n, int p)
 {
    if(p==0)
        return 1;
    else if(p==1)
        return n;
    else{
        if(p%2==0)
        {
            int ans = Power(n,p/2);
            return ans*ans;
        }
        else{
            int ans =  Power(n,p/2);
            return n*ans*ans;
        }
    }
 }
int armstrong (int n, int p)
{
    if(n<=9)
        return n;
    return pow(n%10,p) + armstrong(n/10,p);
    
}
int main()
{
    int ans = armstrong(13,2);
    if(ans==13)
    cout<<"armstrong number";
    else
    cout<<"not armstrong";
    return 0;

}