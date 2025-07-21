#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxsum=INT_MIN;
    int previous=0;
    int k=3;
    // first calculate the sum of 1st window .
    for(int i=0;i<k;i++)
    {
        previous+=arr[i];
    }
    maxsum=previous;
    int idx=-1;
    int currentsum=0;
    int i=1;  // we calculated first 3 element sum .
    int j=k;
    while(j<n)
    {
        currentsum=previous+arr[j]-arr[i-1];


        // maxsum=max(currentsum,maxsum);
        if(currentsum>maxsum)
        {
            maxsum=currentsum;
            idx=i;
        }
        i++;
        j++;
        previous=currentsum;

    }
    cout<<idx<<" "<<maxsum;
}