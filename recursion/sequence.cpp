#include<bits/stdc++.h>
using namespace std;
void sequence (int n)
{
    if(n<1)
        return;
    sequence(n-1);
    cout<<n<<" ";
}
int main()
{
    sequence(115);
    return 0;
}