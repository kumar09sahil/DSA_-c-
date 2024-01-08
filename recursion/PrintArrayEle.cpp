#include<bits/stdc++.h>
using namespace std;
void PrintArrayEle(int arr[], int idx, int n)
{
    if(idx >= n)
        return;
    cout<<arr[idx]<<" ";
    PrintArrayEle(arr,idx+1,n);

}
int main()
{
    int a[] = {1,2,36,4,5,6,7};
    PrintArrayEle(a,0,7);
    return 0;
}