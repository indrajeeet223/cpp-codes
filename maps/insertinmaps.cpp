#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int>m;
    pair<string,int>p1;
    pair<string,int>p2;
    pair<string,int>p3;
    p1.first="indrajeet";
    p1.second=37;   
    p2.first="om";
    p2.second=31;
    p3.first="aryan";
    p3.second=52;
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    m["omkar"]=32;
    cout<<m.size()<<endl;
    for(pair<string,int>p : m)   
        cout<<p.first<<"  roll no :- "<<p.second<<endl;
    m.erase("omkar");
    cout<<"erased some data ."<<endl;
        for(auto p : m)   
        cout<<p.first<<"  roll no :- "<<p.second<<endl;
    cout<<m.size()<<endl;
    string key="indrajeet";
    if(m.find(key)!=m.end()) cout<<"present";
    else cout<<"absent";
    cout<<m["indrajeet"];
    cout<<endl;
    int x=m["om"];
    cout<<x;
    

}