// use of euclid alogorithm : - if we subtract a larger number from the smaller number ,
                            //  to reduce the larger number even then the hcf of the number remains same

#include<bits/stdc++.h>
using namespace std;
int hcf (int a , int b)
{
    if(b>a)
    {
        hcf(b,a);
        }
    if(a%b==0)
    {
        return b;
    }
    else
    {
        return hcf(b,a%b);
    }
}
int main()
{
    int ans = hcf(8,10);
    cout<<"hcf is :"<<ans;
    return 0;
}