
// run in online compiler .
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void print(queue<int>&v)
{
    for(int i=1;i<=v.size();i++)
    {
        int x=v.front();
        cout<<x<<" ";
        v.pop();
        v.push(x);
    }
    cout<<endl;
}
void display(queue<int>&v)
{
    stack<int>z;
    while(v.size()>0)
    {
        int x=v.front();
        v.pop();
        z.push(x);
        
    }
    while(z.size()>0)
    {
        int x=z.top();
        
        z.pop();
        v.push(x);
    }
}
int main()
{
    queue<int>v;
    v.push(100);
    v.push(200);
    v.push(300);
    v.push(400);
    v.push(500);
    print(v);
    display(v);
    print(v);
}