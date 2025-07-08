#include<iostream>
#include<vector>
using namespace std;
void subsetofarray(int arr[],int n,int idx,vector<int>&v)
{
    if(idx==n)
    {
        for(int c:v)
        {
            cout<<c<<" ";
            
        }
        cout<<endl;
        return ;
    }
    subsetofarray(arr,n,idx+1,v);
    v.push_back(arr[idx]);
     subsetofarray(arr,n,idx+1,v);
     v.pop_back();

}
int main()
{
    int arr[]={1,2,3};
    vector<int>v;
    int n=sizeof(arr)/sizeof(arr[0]);
    subsetofarray(arr,n,0,v);
}