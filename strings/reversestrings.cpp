#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string v="abcdef";
   // reverse(v.begin(),v.end());
    cout<<v<<endl;
    //reverse(v.begin()+2,v.end()-1);
    reverse(v.begin()+0,v.begin()+2);  // 4(index )+1;
     cout<<v<<endl;

}