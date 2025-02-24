#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
string display(string s)
{
    stack<char>v;
    for(int i=0;i<s.size();i++)
    {
        if(v.size()==0) v.push(s[i]);
        else if(s[i]!=v.top()) v.push(s[i]);
    }
   string x="";
   
    
    while(v.size()>0)
    {
        x+=v.top();
        v.pop();
    }
    reverse(x.begin(),x.end());
    return x;
    
    
}
int main()
{
    string s="aaabbcddaabffg";
    cout<<display(s);
    
}