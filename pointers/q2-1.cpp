#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
using namespace std;
void find (int a[], int *ele,  int k){
    *ele = a[k-1];
}
int main()
{
    int size,k;
    int ele;
    cout<<"enter the size of the array";
    cin>>size;
    int a[size];
    for ( int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
    
    cout<<"enter the kth element to be searched";
    cin>>k;
    find (a, &ele, k);
    cout<<"kth element is "<<ele;
    return 0;
}