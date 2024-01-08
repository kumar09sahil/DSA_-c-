#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"enter the numebr";
    cin>>num;
    (num%3==0&&num%5==0) ? cout<<"fizzbuzz": ((num%5==0) ? cout<<"buzz" :  num%3==0 ? cout<<"fizz" : cout<<num);
    return 0;
}