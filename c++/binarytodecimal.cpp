#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int x=1;
    int arr[]={1,0,0,1,0,1};
    for(int i=5;i>=0;i--)
{
    sum+=arr[i]*x;
    x*=2;
}
cout<<sum;
return 0;
}