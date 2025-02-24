#include<iostream>
#include<string>
#include<stack>
using namespace std;
void display(string s)
{
    stack<char>v;
    for(int i=0;i<s.size();i++)
    {
        if(v.size()==0) v.push(s[i]);
        else if(s[i]!=v.top()) v.push(s[i]);
    }
    stack<char>x;
    
    while(v.size()>0)
    {
        x.push(v.top());
        v.pop();
    }
     while(x.size()>0)
    {
        cout<<x.top();
        v.push(x.top());
        x.pop();
    }
    
}
int main()
{
    string s="aaabbcddaabffg";
    display(s);
    
}