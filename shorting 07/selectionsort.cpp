#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={5,3,2,4,1};
    for(int e:arr)
    {
        cout<<e<<" ";
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    // selection sort 
    // number of passes .
    for(int i=0;i<n-1;i++)
        {
            int min=INT_MAX;
            int midindex=-1;
            for(int j=i;j<n;j++)
            {
               // finding minimum element .
                if(arr[j]<min)
                {
                    min=arr[j];
                    midindex=j;
                }
            }
            swap(arr[i],arr[midindex]);
        }
        cout<<endl;
        for(int e:arr)
    {
        cout<<e<<" ";
    }

}