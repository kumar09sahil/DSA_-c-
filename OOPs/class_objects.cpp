#include<bits/stdc++.h>
using namespace std;
class fruit{
    public:
    string name;
    string color;
};
int main()
{
    fruit apple;
    apple.name = "apple";
    apple.color = "green";
    cout<<apple.name<<" - "<<apple.color<<endl;

    fruit *mango = new fruit();
    mango->name = "mango";
    mango->color = "red";
    cout<<mango->name<<" - "<<mango->color;
    return 0;

}