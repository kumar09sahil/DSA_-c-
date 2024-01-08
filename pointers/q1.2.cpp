#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=4;
    int y= 10;
    int *ptr1 =&x;
    int *ptr2 =&y;
    cout<<"product is "<<(*ptr1 * *ptr2);
    return 0;
}