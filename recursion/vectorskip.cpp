#include<iostream>
#include<vector>
using namespace std;
void fun(vector<int>&v,int n,vector<int>&ans,int idx)
{
    if(idx==n)
    {
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i];
        }
        return ;
    }
    int z=v[idx];
    if(z==1) fun(v,n,ans,idx+1);
    else {
        ans.push_back(z);
        fun(v,n,ans,idx+1);
    }
    
}
int main()
{
    vector<int>v={1,2,3,1,1,4,1,7};
    vector<int>ans;
    int n=v.size();
    fun(v,n,ans,0);
}   