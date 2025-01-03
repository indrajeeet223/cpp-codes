#include<iostream>
using namespace std;
int power(int m,int x)
{
    if(x==1) return m;
    if(x==0) return 1;
    int z=power(m,x/2);   // this program only works for only even power .
    return z*z;
}
int main()
{
    cout<<power(3,2);
}