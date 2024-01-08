//* sort the array of food in lexicographiacl order

#include<bits/stdc++.h>
using namespace std;
void FruitSort(char fruits[][60], int n)
{
    for(int i=0;i<n;i++)
    {
        int min_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(fruits[min_idx],fruits[j]) > 0)
            {
                min_idx = j;
            }
        }
        if(min_idx!= i)
        swap(fruits[min_idx],fruits[i]);
    }
}
int main()
{
    char fruits [][60] = {"banana","kiwi","apple","custard","watermelon"};
    int n = sizeof(fruits)/sizeof(fruits[0]);
    FruitSort(fruits,n);
    for(int i=0;i<n;i++)
    {
        cout<<fruits[i]<<" ";
    }
    return 0;
}