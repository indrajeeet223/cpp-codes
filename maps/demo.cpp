#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    pair<string,int>p;
    pair<string,int>p1;
    pair<string,int>p2;
    p.first="indra";
    p.second=1;
    p1.first="kumar";
    p1.second=2;
    p2.first="om";
    p2.second=21;
    m.insert(p);
    m.insert(p1);
    m.insert(p2);
    for(pair<string,int>p:m)
    {
        cout<<"name "<<p.first<<"  roll no"<<p.second;
        cout<<endl;
    }
    int x=m["om"];
    cout<<x<<endl;
    m["om"]++;
    cout<<m["om"];
    
}