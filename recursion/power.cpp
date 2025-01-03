#include<iostream>
using namespace std;
int fun(int m,int n)
{
    if(n==1) return m;
    if(n==0) return 1;
    return m*fun(m,n-1);
}
int main()
{
    int m;
    cout<<"ENter the number :";
    cin>>m;
    int n;
    cout<<"Enter the power :";
    cin>>n;
    cout<<fun(m,n);
}