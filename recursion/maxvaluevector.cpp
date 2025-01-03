#include<iostream>
using namespace std;
int fun(int arr[],int n,int idx)
{
    if(n==idx) return 0;
    return max(arr[idx],fun(arr,n,idx+1));
}
int main()
{
    int arr[]={1,2,12,33,4,5,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<fun(arr,n,0);
}