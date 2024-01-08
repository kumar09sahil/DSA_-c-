#include<bits/stdc++.h>
using namespace std; 
// int main()
// {
//     int a[]={1,5,6,3,9,7,56};
//     int q[]={5,89,6,56};
//     int f[100000];
//     for(int i=0;i<100000;i++)
//     {
//         f[i]=0;
//     }
//     for(int j=0;j<7;j++)
//     {
//         f[a[j]]=1;
//     }
//     for(int k=0;k<4;k++)
//     {
//         if(f[q[k]]==1)
//         cout<<q[k]<<" is present in the array"<<endl;
//     }
//     return 0;
// }
int main()
{
    int n;
    cout<<"enter th number of elements";
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    const int N=1e5 + 10;
    vector <int> freq(N,0);
    for (int i=0;i<n;i++)
    {
        freq[(v[i])]++;
    }
    int q;
    cout<<"enter the number  queries ";
    cin>>q;
    int query_ele;
    while(q--)
    {
        cout<<"enter the queries element";
        cin>>query_ele;
        cout<<freq[query_ele]<<" times in the array"<<endl;
    }
    return 0;

}