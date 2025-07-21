#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,3,1,6,1,6,6,6,16,4,3,8,13,13,13,13,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    int count=0;
    int maxelement=INT8_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxelement)
        {
            maxelement=arr[i];
            count=1;

        }
        else if(arr[i]==maxelement){
            count++;
        }
        ans=max(ans,count);
    }
    cout<<ans<<endl;



}