#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>&v)
{
    int n=v.size();
    for(int i=1;i<=n;i++)
    {
        int x=v.front();
        cout<<x<<" ";
        v.pop();
        v.push(x);
        
    }
}
int main()
{
    queue<int>v;
    v.push(10);
    v.push(20);
    v.push(30);
    v.push(40);
    v.push(50);
    display(v);
    v.pop();
    cout<<endl;
    display(v);
}