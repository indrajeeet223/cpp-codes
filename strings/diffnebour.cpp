#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the character to check different negour \n";
    cin>>s;
    int count =0;
    int i=0;
    int n=s.length();
   
    while(i<n)
    {
         if(n==1) break;
          else if(s[i]!=s[i+1] && s[i]!=s[i-1])
        {
            count++;
        }
        else if(i==0)
        {
            if(s[i]!=s[i+1]) count++;
        }
        else if(i==n-1)
        {
            if(s[i]!=s[i-1]) count++;
        }
        i++;
    }
    cout<<count;
}   