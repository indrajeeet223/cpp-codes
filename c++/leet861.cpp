#include<iostream>
#include<vector>
using namespace std;
int matrixScore(vector<vector<int>>& v) 

{
int m=v.size();  // rows
        int n=v[0].size();  // colms .
        for(int i=0;i<m;i++)
        {
            if(v[i][0]==0)
            {
                for(int j=0;j<n;j++)  // flip the rows 
                {
                    if(v[i][j]==0) v[i][j]=1;
                    else v[i][j]=0;
                }
            }
        }
        for(int j=0;j<n;j++)
        {
            int zero=0;
            int one=0;
            for(int i=0;i<m;i++)
            {
                if(v[i][j]==0) zero++;
                else one++;
            }
            if(zero>one)
            {
                for(int i=0;i<m;i++)
                {
                    if(v[i][j]==0) v[i][j]=1;
                    else v[i][j]=0;
                }
            }
        }
        //  covter binary yo decimal 
        int sum=0;
        
        for(int i=0;i<m;i++)
        {   int x=1;
            for(int j=n-1;j>=0;j--)
            {
                sum+=v[i][j]*x;
                x*=2;
            }
        }
        return sum;

}
int main()
{
    int m,n;
    cout<<"enter the number of rows :";
    cin>>m;
    cout<<"Enter the number of cols :";
    cin>>n;
    vector<vector<int>>v(m,vector<int>(n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
    cout<<matrixScore(v);

}