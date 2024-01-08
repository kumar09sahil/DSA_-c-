#include<bits/stdc++.h>
using namespace std;
int main()
{
//   int arr[]={-1,0,1,2,-1,-4};
  int arr[]={1,2,3,4};
  int size=sizeof(arr)/sizeof(arr[0]);
  int x=6,c=0;
  int i=0,j,k;
  while(i<size)
  {
        j=i+1;
        k=i+2;
        while(k<size)
        {

            if(arr[i]+arr[j]+arr[k]==x)
            {
                c++;
                i++;
            }
            else
            {
                j++;
                k++;
            }
        }
        i++;
    }
    cout<<"count is "<<c;
    return 0;

}