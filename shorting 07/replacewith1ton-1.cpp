#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main()
{
    int arr[]={19,12,23,8,16};
     int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n,0);
    
    for(int e:arr)
    {
        cout<<e<<" ";
    }
    cout<<endl;
   
    int x=0;
    for(int i=0;i<n;i++)
    {
        int mx=INT_MAX;
        int index=-1;
        for(int j=0;j<n;j++)
        {
            if(v[j]==1) continue;
            if(mx>arr[j])
            {
                mx=arr[j];
                index=j;
               
            }
        }
        v[index]=1;
        arr[index]=x;
        x+=1;
    }
     for(int e:arr)
    {
        cout<<e<<" ";
    }
}