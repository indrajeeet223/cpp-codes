#include<iostream>
#include<algorithm>
using namespace std;
void fun(int arr[],int n,int idx,int max)
{
    if(n==idx)
    {
        cout<<max;
        return ;

    }
    if(max<arr[idx]) max=arr[idx];
    fun(arr,n,idx+1,max);
}
int main()
{
    int arr[]={12,23,45,6,1,21,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    fun(arr,n,0,-1);

}