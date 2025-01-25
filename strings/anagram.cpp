#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a="indrajeetkokate";
    string b="indrakokatejeet";
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    cout<<a<<endl;
    cout<<b<<endl;
    if(a==b)    cout<< true;
    else cout<<false ;

}