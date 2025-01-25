#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string x;
    getline(cin,x);
    int n=x.length();
    reverse(x.begin(),x.begin()+n/2);
    cout<<x<<" ";
}