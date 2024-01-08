#include<bits/stdc++.h>
using namespace std;


//* time = o(logn)
// *space = o(logn)
int recursiveBinerySearch(vector <int> &v, int num,int low,int high)
{
    if(low>=high)
        return -1;
    // int mid = (low+high)/2;
    int mid = low + (high-low)/2;
    if(num == v[mid])
        return mid;
    else if(num>v[mid])
        return recursiveBinerySearch(v,num,mid+1,high);
    else if(num<v[mid])
        return recursiveBinerySearch(v,num,low,mid-1);
    
}

//* time = o(logn)
// *space = o(1)
int binarySearch(vector <int> &v, int num)
{
    // * define the search space
    int low =0; //! start of the search space
    int high = v.size()-1; //* end of search space
    while(low <= high)
    {
        // * claculate the mid point of th search space
        // int mid = (low+high)/2;
        int mid = low + (high-low)/2;  //* modified mid to tacle overflow
        if(num == v[mid])
        {
            return mid;
        }
        else if(num>v[mid])
        // * discarding the left search space
            low= mid+1;

        else if(num<v[mid])
        // *discarding the right search space
            high = mid-1;
    }
    return -1;
}
int main()
{
    vector <int> v = {2,5,7,8,23,45,76,78};
    // cout<<binarySearch(v,7)<<" ";
    cout<<recursiveBinerySearch(v,76,0,v.size()-1)<<" ";
    return 0;
}