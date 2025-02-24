#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>v;
    v.push(90);
    v.push(100);
    v.push(123);
    v.push(756);
    cout<<v.size()<<endl;
    v.pop();
    cout<<v.size()<<endl;
    cout<<v.top();  // top most element in a stack .
    
}