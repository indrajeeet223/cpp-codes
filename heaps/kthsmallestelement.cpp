#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int arr[]={1,2,-12,45,101,85 -74,10};
    int n=sizeof(arr)/4;
    int k=3;
    priority_queue<int>pq;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();
} 