// code run in online compiler .
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    stack<int>a;
    a.push(100);
    a.push(200);
    a.push(300);
    a.push(400);
    a.push(500);
    while(a.size()>0)
    {
       v.push_back(a.top());
       a.pop();
    }
    
    for(int i=0;i<v.size();i++)
    {
        a.push(v[i]);
    }
    while(a.size()>0)
    {
       cout<<a.top()<<" ";
       a.pop();
    }
}