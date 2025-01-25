#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>pq;
    pq.push(32);
    pq.push(90);
    pq.push(-1);
    pq.push(-10);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    priority_queue<int,vector<int>,greater<int>>pq2;
    pq2.push(12);
    pq2.push(90);
    pq2.push(11);
    cout<<pq2.top()<<endl;
    pq2.pop();
    cout<<pq2.top();
}