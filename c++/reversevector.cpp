#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v(5);
    cout<<"Enter number :";
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    int n=v.size();
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    cout<<"assending order :";
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v.at(i)<<" ";
    }

}