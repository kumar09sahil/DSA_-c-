#include<bits/stdc++.h>
using namespace std;
int main()
{
//   int arr[]={1,2,3,4};
  int arr[]={-1,0,1,2,3};
  int size=sizeof(arr)/sizeof(arr[0]);
  int f=0,x=2;
  for(int i=0;i<size;i++)
  {
    if(arr[i]>x)
    {
        break;
    }
    else
    {
        for(int j=i+1;j<size;j++)
        {
            if(x==arr[i]+arr[j])
            {
                f=1;
                cout<<"found";
                break;
            }
        }
    }
        if(f==1)
        {
            break;
        }
  } 
  if(f==0)
  {
    cout<<" not found";
  }
  return 0;

}