#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>a; 
    stack<int>b;
    stack<int>c;
    a.push(100);
    a.push(200);
    a.push(300);
    a.push(400);
    a.push(500);
    while(a.size()>0)
    {
        b.push(a.top());
        a.pop();
    }
    while(b.size()>0)
    {
        c.push(b.top());
        b.pop();
    }
    while(c.size()>0)
    {
        a.push(c.top());
        c.pop();
    }
     while(a.size()>0)
    {
       cout<<a.top()<<" ";
        a.pop();
    }
    
    
    
}