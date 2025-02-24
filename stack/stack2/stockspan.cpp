#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int ass[]={100,80,60,81,70,60,75,85};
    int n=sizeof(ass)/sizeof(ass[0]);
    for(int i=0;i<n;i++)
    {
        cout<<ass[i]<<" ";

    }
    cout<<endl;
    int arr[n];
    stack<int>v;
    arr[0]=1;
    v.push(0);
    for(int i=1;i<n;i++)
    {
        while (v.size()>0 && ass[v.top()]<=ass[i])
        {
        v.pop();
        }
        if(v.size()==0) arr[i]=-1;
        else arr[i]=v.top();
        arr[i]=i-arr[i];
        v.push(i);
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }



}