#include<iostream>
#include<vector>
using namespace std;
void fun(vector<int>& arr) {
        int n=arr.size();
        int x=0;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0) v.push_back(arr[i]);
            else x++;
        }
     //   arr.push_back(v);
        for(int j=0;j<x;j++)
        {
            v.push_back(0);
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=v[i];
            }
}
int main()
{
    vector<int>p;
    p.push_back(1);
    p.push_back(0);
    p.push_back(3);
    p.push_back(0);
    p.push_back(9);
    
    fun(p);
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }

}
