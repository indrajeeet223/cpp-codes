// queue using vector reverse
#include<iostream>
#include<vector>
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
}
void display(queue<int>&v)
{
    vector<int>z;
    while(v.size()>0)
    {
        int x=v.front();
        z.push_back(x);
        v.pop();
    }
   
   for(int i=z.size()-1;i>=0;i--)
   {
       int x=z[i];
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
    cout<<endl;
    display(v);
    print(v);
    
}