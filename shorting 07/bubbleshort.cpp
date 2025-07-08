#include<iostream>
using namespace std;
void display(int (&arr)[5])

{
    for(int e:arr )
    {
        cout<<e<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={1,5,2,4,3};                        
    int n=sizeof(arr)/sizeof(arr[0]);
  
   display(arr);
    // bubble sort 
    /*for(int i=0;i<n-1;i++)  // n-1 passes for bubble sort 
    {
        for(int j=0;j<n-1-i;j++)       // for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
        */
    // bubble sort optimised .
     for(int i=0;i<n-1;i++)  // n-1 passes for bubble sort  // no of swaps (n(n-1))/2  .
    {
        bool flag=true;
        for(int j=0;j<n-1-i;j++)       // for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;  // swap did not happens .
    }
    display(arr);
}