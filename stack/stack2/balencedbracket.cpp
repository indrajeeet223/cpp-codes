#include<iostream>
#include<stack>
using namespace std;
bool display(string v)
{
    if(v.size()%2!=0) return false;
    stack<char>z;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]=='(') z.push(v[i]);
        else {
            if(z.size()==0) return false;
            else{
                z.pop();
            }
        }
    }
    if(z.size()==0) return true;
    else return false;
}
int main()
{
    string str="((())";
    cout<<display(str);

}