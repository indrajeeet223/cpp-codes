// finding unique element by using ^ . ^ is  community property .
#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,4,1,3,2,3,5,1,2};
    int res=0;
    for(int i=0;i<9;i++)
    {
        res=res^arr[i];
    }
    cout<<res<<"\n";
}