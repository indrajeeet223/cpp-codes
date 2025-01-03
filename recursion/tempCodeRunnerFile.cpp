#include<iostream>
using namespace std;
void fun(int arr[],int n,int idx)
{
    if(n==idx) return ;
    cout<<arr[idx]<<" ";
    fun(arr,n,idx+1);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    fun(arr,n,0);
}