#include<iostream>
#include<string>
#include<algorithm> 
using namespace std;
int main()
{
    string v="aabcdefghi";
    // substring(index,len or end );
    cout<<v.substr(0,2);
    cout<<endl<<v.substr(2);
}