#include<bits/stdc++.h>
using namespace std;
string decode(string s)
{
    string res="";  //*to store the result
    
    int int_num;

    //*to traverse the code
    for(int i=0;i<s.size();i++)
    {
        string num="";
        if(s[i]!= ']')       //* finding the innermost closing bracckett
        {
            res+=s[i];
        }
        else{
            string str="";
            int j=res.size()-1;
            while(res[j]!='[')   //* extracting value incide the inner bracckett
            {
                str+=res[j];
                j--;
                res.pop_back();
            }
            res.pop_back();      //* removing the opening bracket from result
            j--;
            reverse(str.begin(),str.end());
            while(res[j]>='0'&& res[j]<='9')
            {
                num+=res[j];
                j--;
            }
            res.pop_back();      //* removing the digit from the result
            reverse(num.begin(),num.end());
            int_num = stoi(num);

            //* inserting string int_num times
            for(int k=0;k<int_num;k++)
            {
                res+=str;         
            }
        }
    }
    return res;
}
int main()
{
    string s= "1[a2[b3[c]]]";
    cout<<decode(s);
    return 0;
}