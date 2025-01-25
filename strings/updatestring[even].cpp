#include<iostream>
#include<string>
using namespace std;
int main()
{
    string x="indrajeet";
    cout<<x<<endl;
    for(int i=0;x[i]!='\0';i++)  // null value 
    {
        if(i%2==0) x[i]='@';

    }
    cout<<x;

}