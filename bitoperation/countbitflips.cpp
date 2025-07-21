// minimum bits flips reqiured to aqurire another number .
#include<iostream>
using namespace std;
int main()
{
    int x=31;
    int y=23;
    cout<<__builtin_popcount(x^y);

}