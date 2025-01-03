#include<iostream>
#include<string>
using namespace std;
int maze(int sr,int sc,int er,int ec)
{
    if(sr>er || sc>ec ) return 0;
    if(sr==er || sc==ec) return 1;
    int rightway=maze(sr,sc+1,er,ec);
    int downway=maze(sr+1,sc,er,ec);
    int total_ways=rightway+downway;
    return total_ways;  
}
void mazepath(int sr,int sc,int er,int ec,string s)
{
    if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec)
    {
        cout<<s<<endl;
        return ;
    }
    mazepath(sr,sc+1,er,ec,s+'R');
    mazepath(sr+1,sc,er,ec,s+'D');
}
int main()
{
    cout<<maze(0,0,2,2)<<endl;
    mazepath(0,0,2,2,"");
    
}
