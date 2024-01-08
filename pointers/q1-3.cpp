#include<bits/stdc++.h>
using namespace std ;
int largest(int *a, int*b, int *c)
{
    if(*a>*b && *a>*c)
    return *a;
    else if(*b>*a && *b>*c)
    return *b;
    else
    return *c;
}
int smallest(int *a, int*b, int *c)
{
    if(*a<*b && *a<*c)
    return *a;
    else if(*b<*a && *b<*c)
    return *b;
    else
    return *c;
}

int main()
{
    int a,b,c;
    a=45;
    b=43;
    c=-1;
    int l=largest(&a, &b, &c);
    int s= smallest(&a, &b, &c);
    cout<<"largest is "<<l<<"\n";
    cout<<"smallest is "<<s<<"\n";
    return 0;

}