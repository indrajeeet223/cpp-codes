#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int arr[]={2,3,5,1,5,3};
    int mincost=0;
    int n=sizeof(arr)/4;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
    }
    while(pq.size()>1)
    {
        int x=pq.top(); pq.pop();
        int y=pq.top(); pq.pop();
        pq.push(x+y);
        mincost+=(x+y);
    }
    cout<<mincost; 
}