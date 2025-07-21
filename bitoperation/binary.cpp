#include<iostream>
using namespace std;

int binary_to_decimal(string &s)
{
    int result=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        char ch=s[i];
        int num=ch-'0'; // ch having ascii value substract the ascii value of 0(48).
        result+=num*(1<<(s.size()-i-1));
    }
    return result;
}

int main()
{
    string str="001011";
    cout<<binary_to_decimal(str);
}
