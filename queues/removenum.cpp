#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>&v)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        if(i%2==0 ) v.pop();
        else
        {
            int x=v.front();
            v.pop();
            cout<<x<<" ";
            v.push(x);
        }
    
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
    display(v);
   
}