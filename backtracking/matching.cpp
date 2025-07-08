#include<iostream>
#include<vector>
using namespace std;
#define mod 1000000007
int f(int i,int mask,int n,vector<vector<int>>&c)
{
    for(int w=0;w<n;w++)
    {
        if(c[i][w]&&mask&(1<<w))
        {
            return 0;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>c(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>c[i][j];
        }
    }
    f(1,(1<<n)-1,n,c);
    return 0; 
}