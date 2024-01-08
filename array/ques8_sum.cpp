#include<bits/stdc++.h>
using namespace std;
int main()
{
//   int arr[]={1,2,3,4,6};
  int arr[]={3,1,3,5,3};
// int arr[]={2,2,2,4,2};
  int size=sizeof(arr)/sizeof(arr[0]);
  int c=0,x=6,i=0,j=size-1;
  while(i<j)
  {
    if(arr[i]+arr[j]==x)
    {
        c++;
        i++;
        j--;
    }
    else if(arr[i]+arr[j]>x){ j--; }
    else
    i++;
  }
  cout<<"found "<<c<< " times";
  return 0;

}