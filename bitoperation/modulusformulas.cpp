// modulus formulas .
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    // for addition .
    int x=INT_MAX;
    int y=INT_MAX;
    cout<<x+y<<endl;  // gives negative values . out of bucket of int datatype .
    cout<<(x+y)%5<<endl;  // also gives negative values .
    cout<<((x%5)+(y%5))%5<<endl;

    // for substraction .
    int a=42,b=31;
    cout<<(a-b)%5<<endl;  // gives correct ans .
    cout<<(a%5-b%5+5)%5;  // add value of devisier .
    
    // for multiplication .
    // (a*b)%5 = ((a%5)*(b%5))%5; 
    // if a and b are big number then multiplycation is not possible 

    // for division 
    // see for division 



}