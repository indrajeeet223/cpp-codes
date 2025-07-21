// by using algorithm 
#include<iostream>
using namespace std;
int count_set_bits_1(int n)
{
    return __builtin_popcount(n);
}
int count_set_bits_2(int n)
{  // tc:- number of set bits
    int count=0;
    while (n>0)
    {
        count++;
        n=(n&(n-1));
    }
    return count;
    
}
int main()
{
    cout<<count_set_bits_1(121)<<endl;
    cout<<count_set_bits_2(121)<<endl;

}