#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n<1)
        return 1;
    return n*factorial(n-1);
}
int main(){
    int fac=factorial(9);
    cout<<fac;
    return 0;
}