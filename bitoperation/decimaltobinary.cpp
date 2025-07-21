#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
// (imp)                                                x<<1=x*2   x>>1=x/2    x<<2=x*(2**2)  x>>2=x/(2**2)
using namespace std;
string binary_to_decimal(int num)
{
    string s="";
        // we want to return a string of binary number .
        while(num>0)
        {
            if(num%2==0) 
            {
                s+='0';
            }   //
            else {
                s+='1';
              }  // num is odd .
            num/=2;
        }
        reverse(s.begin(),s.end());
        return s;

}
int main()

{
int n=12;
string ans=binary_to_decimal(n);
cout<<ans;
}



