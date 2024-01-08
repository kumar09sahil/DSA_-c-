#include<bits/stdc++.h>
using namespace std;
int main()
{
  // int arr1[]={2,3,5} ;
  // int arr2[]={1,4,6,7};
  int arr1[]={1,2,3,5} ;
  int arr2[]={6,7,8,9,10};
  int size1=sizeof(arr1)/sizeof(arr1[0]);
  int size2=sizeof(arr2)/sizeof(arr2[0]);
  int arr3[size1+size2];
  int i=0,j=0,k=0;
  while(i<size1 && j<size2)
  {
      if(arr1[i]<arr2[j])
      {
        arr3[k++]=arr1[i++];
      }
      else
      {
        arr3[k++]=arr2[j++];
      }
  }
  while(i<size1)
  {
    arr3[k++]=arr1[i++];
  }
  while(j<size2)
  {
    arr3[k++]=arr2[j++];
  }
  for(int ele:arr3)
  {
    cout<<ele<<" ";
  }
  return 0;
}