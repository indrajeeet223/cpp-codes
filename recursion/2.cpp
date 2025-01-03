#include<iostream>
using namespace std;
void fun(int n)
{
    if(n==0)
        return ;
    cout<<n<<endl;
    fun(n-1);
}
int main()
{
    int n;
    cout<<"Entr the number .";
    cin>>n;
    fun(n);
}