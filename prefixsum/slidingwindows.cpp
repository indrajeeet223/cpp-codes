#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxsum=INT_MIN;
    int idx=-1;
    for(int i=0;i<=n-k;i++)
    {
        int sum=0;
        for(int j=i;j<i+k;j++)
        {
            sum+=arr[j];
        }
       if(sum>maxsum) {
        maxsum=sum;
        idx=i;
       }
    }
   cout<<maxsum<<" "<<idx;
}