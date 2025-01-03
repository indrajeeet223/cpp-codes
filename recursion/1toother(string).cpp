#include<iostream>
#include<string>
using namespace std;
void fun(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans;
        return ;

    }
    char ch=s[0];
    fun(s.substr(1),ans+ch);
    fun(s,ans);

}
int main()
{
    string s="indrajeet";
    fun(s,"");
}