#include<iostream>
using namespace std;
void pip(int n)
{
    if(n==0) return ;
    cout<<"pre"<<endl;
    pip(n-1);
    cout<<"in"<<endl;
    pip(n-1);
    cout<<"post"<<endl;
}
int main()
{
    cout<<endl;
    pip(2);
    cout<<endl; 
} 