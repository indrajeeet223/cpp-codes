
// program works in online compiler.
#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>&v)
{
    if(v.size()==0) return;
    int x=v.top();
    v.pop();
    display(v);
     cout<<x<<" ";
    v.push(x);
    
}
void pushatbottom(stack<int>&v,int val)
{
    if(v.size()==0) 
    {
        v.push(val);
        return ;    
    }
    int x=v.top();
    v.pop();
   pushatbottom(v, val);
     
    v.push(x);
}
int main()
{
    stack<int>v;
    v.push(100);
    v.push(200);
    v.push(300);
    v.push(400);
    v.push(500);
    cout<<endl;
    display(v);
    cout<<endl;
    pushatbottom(v,-999);
    display(v);
    
    
}
