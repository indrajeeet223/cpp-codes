#include<iostream>
#include<set>
#include<map>
using namespace std;
int main()
{
    set<int>s;
    s.insert(21);
    s.insert(11);
    s.insert(30);
    s.insert(34);
    s.insert(1);
    for(int ele : s)
        cout<<ele<<" ";  // prints in sequence .
        cout<<endl;
    map<int,int>m;
    m[12]=01;
    m[34]=02;
    m[28]=03;
    m[78]=04;
    for(pair<int,int>p :m)
    {
        cout<<p.first<<" ";
    }
    map<string,int>map;
    map["indra"]=37;
    map["harsh"]=39;
    map["om"]=31;
    for(auto ele:map)
    {
        cout<<ele.first<<" ";
    }

}