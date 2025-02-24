#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int ass[]={3,1,2,7,4,6,2,3};
    int n=sizeof(ass)/sizeof(ass[0]);
    for(int i=0;i<n;i++)
    {
        cout<<ass[i]<<" ";

    }
    cout<<endl;
    int arr[n];
    stack<int>v;
    //  check from last index 
    arr[n-1]=-1;
    v.push(ass[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        while(v.size()>0 && ass[i]>=v.top())
        {
            v.pop();
        }
        if(v.size()==0 ) arr[i]=-1;
        else arr[i]=v.top();
        v.push(ass[i]);

    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }



}