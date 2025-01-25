#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    vector<string>v;
    cout<<"enter the string \n";
    getline(cin,s);
    stringstream ss(s);
    string temp;
    while(ss>>temp)
    {
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    int max=0;
    for(int i=0;i<v.size();i++)
    {
        int count=1;
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]==v[j]) count++;
        }
        if(count>max) max=count;
    }
    for(int i=0;i<v.size();i++)
    {
        int count=1;
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]==v[j]) count++;
        }
        if(count==max) cout<<v[i]<<" is :"<<max;
    }
    
}