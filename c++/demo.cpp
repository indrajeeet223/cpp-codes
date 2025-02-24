#include<iostream>
#include<vector>
using namespace std;
void change(vector<vector<int>>&a)
{
    a[0][0]=1;
}
int main(){
    vector<vector<int>>v(3,vector<int>(3,9));
    
    change(v);
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}