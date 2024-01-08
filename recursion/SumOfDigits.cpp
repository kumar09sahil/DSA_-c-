#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n<=9)
        return n;
    return n%10 + sum(n/10);
}
int main(){
    int DigitSum = sum(1234567);
    cout<<DigitSum;
    return 0;
}