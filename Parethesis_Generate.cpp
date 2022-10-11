#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
vector<string >v;
void generate(string &s,int open,int close)  //&s does Not make the Copy of String
//As copy of string take O(n) complexicity!
//Concatenation of string take O(n^2) complexicity!
{
    // cout<<s<<endl; //For More Effecicent Solution!
    if(open==0 && close==0){
        v.push_back(s);
        return;
    }
    if(open>0)
    {
        s.push_back('(');
        generate(s,open-1,close);
        s.pop_back();
    }
    if(close>0)
    {
        if(close>open)
        {
            s.push_back(')');
            generate(s,open,close-1);
            s.pop_back();
        }
    }
}
int main(){
    int n;
    cin>>n;
    string s;
    generate(s,n,n);
    for(auto &it:v){
        cout<<it<<endl;
    }
    return 0;
}