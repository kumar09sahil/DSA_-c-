#include<bits/stdc++.h>
using namespace std;
int main()
{
//   int arr[]={5,10,15,20,36};int x=10;
//   int arr[]={5,6,7,8,9};int x=4
  int arr[]={9,23,45,69,78};

  int size=sizeof(arr)/sizeof(arr[0]);
  int f=0,x=56;
  for(int i=0;i<size;i++)
  {
    for(int j=i+1;j<size;j++)
    {
        if(arr[j]-arr[i]==x)
        {
            f=1;
            cout<<"found";
            break;
        }
    }
        if(f==1){ break;}
  }
  if(f==0)
  cout<<"not found";
  return 0;

}