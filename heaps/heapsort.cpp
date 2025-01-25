#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    vector<int>v={10,1,2,20,5,8};
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int ele:v)
    {
        pq.push(ele);
    }
    int i=0;
    while(pq.size()>0 && i<v.size())
    {
        v[i++]=pq.top();
        pq.pop();
    }
    for(int ele :v)
    {
        cout<<ele<<" ";
    }

}