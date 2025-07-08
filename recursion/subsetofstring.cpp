#include<iostream>
using namespace std;
void subset(string str,string ans )
{                                           // do it with index  .
    if(str=="") {
        cout<<ans<<endl;
        return ;
    }
        char ch=str[0];
        subset(str.substr(1),ans+ch);
        subset(str.substr(1),ans);
    }

int main()
{
    string str="abc";
    subset(str,"");
}