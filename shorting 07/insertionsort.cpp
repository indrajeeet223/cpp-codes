#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,4,1,2};
    for(int e:arr)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    // insertion sort 
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++) 
    {
        int j=i; 
        while(j>=1)      //                 while(j>=1 and arr[j]<arr[j-1])
        {                //                { swap(arr[j],arr[j-1]) ; j--;  }
            if(arr[j]>=arr[j-1]) {
              break;
            }
            else swap(arr[j],arr[j-1]);

            j--;
        }
    }
    for(auto e:arr)
    {
        cout<<e<<" ";
    }
}