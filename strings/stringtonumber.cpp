#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string to number :
    string x="12345";
    int y=stoi(x);
    cout<<y+1;
    cout<<endl;
    string str="123456789123456789";
    long long z=stoll(str);
    cout<<z;
    cout<<endl;
    // number to string 
    int val=23424;
    string ass=to_string(val);
    cout<<ass;
}