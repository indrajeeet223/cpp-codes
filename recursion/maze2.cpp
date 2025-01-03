#include<iostream>
#include<string>
using namespace std;
int maze(int r,int c)
{
    if(r<1 || c<1)
        return 0;
    if(r==1 && c==1)
        return 1;
    int column=maze(r,c-1);
    int row=maze(r-1,c);
    return column+row;
}
void path(int r,int c,string s)
{
    if(r<1 || c<1) return ;
        
    if(r==1 && c==1 )
    {
        cout<<s<<endl;
        return ;
    }
    path(r,c-1,s+'R');
    path(r-1,c,s+'D');
}
int main()
{
    cout<<maze(3,3)<<endl;
    path(3,3,"");
    
}