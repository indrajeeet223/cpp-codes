#include<iostream>
using namespace std;
void fun(int sum ,int n)
{
    if(n==0)
    {
        cout<<sum;
        return ;
    }
    fun(sum+n,n-1);
}
int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    fun(0,n);
}