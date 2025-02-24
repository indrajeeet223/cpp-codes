#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>v;
    /*operataions in queue
    push 
    pop
    size,empty
    back
    front (top in stack)*/
    v.push(10);
    v.push(20);
    v.push(30);
    v.push(40);
    v.push(50);
    cout<<v.front()<<endl;
    cout<<v.back();
}