// if we are calculating the factorial of big number then it gives overflow . then use of modulus operator .
// fact[i]=(i%c*fact[i]%c)%c;
#include<iostream>
#include<vector>
using namespace std;
vector<long long int>factorial(int n)
{
    vector<long long int>fact(n+1,1);
    int mod=1000000007;
    for(int i=2;i<=n;i++)
    {
        fact[i]=((i%mod)*(fact[i-1]%mod));  // i%mod * fact[i-1]%mod these are big values due to bucket flows .use long long int 
    }
    return fact;
}
int main()
{
vector<long long int>res=factorial(25);
for(int i=0;i<res.size();i++)
{
    cout<<i<<" ! ="<<res[i]<<"\n";
}
}