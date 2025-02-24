// program works in online compiler.
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
void displayrev(stack<int>&v)
{
    if(v.size()==0) return;
    int x=v.top();
    cout<<x<<" ";
    v.pop();
    displayrev(v);
    v.push(x);
    
}
void display(stack<int>&v)
{
    if(v.size()==0) return;
    int x=v.top();
    v.pop();
    display(v);
     cout<<x<<" ";
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
    displayrev(v);
    cout<<endl;
    display(v);
    
    
}