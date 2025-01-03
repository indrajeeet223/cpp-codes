#include<iostream>
using namespace std;
void fun(int n)
{
    if(n==0) return ;
    cout<<"hello world ."<<endl;
    int a=n-1;
    fun(a);
}
int main()
{ 
    int x=5;
    fun(x);
}