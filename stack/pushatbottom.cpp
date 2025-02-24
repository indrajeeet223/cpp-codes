#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>&v)
{
    stack<int>temp;
    while(v.size()>0)
    {
        temp.push(v.top());
        v.pop();
    }
    
    while(temp.size()>0)
    {
        v.push(temp.top());
        
        cout<<v.top()<<" ";
        temp.pop();
    }
    
}
void pushbottomelememt(stack<int>&v,int x)
{
 stack<int>z;
  while(v.size()>0)
    {
        z.push(v.top());
        
        
        v.pop();
    }
    v.push(x);
    while(z.size()>0)
    {
        v.push(z.top());
        
        
        z.pop();
    }
    
 
}
int main()
{
    stack<int>v;
    v.push(100);
    v.push(200);
    v.push(300);
    v.push(400);
    v.push(500);
    print(v);
    cout<<endl;
    pushbottomelememt(v,80);
    print(v);
}