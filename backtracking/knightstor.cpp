#include<iostream>
#include<vector>
using namespace std;

bool issafe(vector<vector<int>>& grid,int i,int j,int n)
{
    return i>=0 and j>=0 and i<n and j<n and grid[i][j]==-1;
}
vector<int> dx {-2,-1,-2,-1,+2,+1,+2,+1};
vector<int> dy {+1,+2,-1,-2,+1,+2,-1,-2};

void display(vector<vector<int>>& grid,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}

void f(vector<vector<int>>&grid ,int i,int j,int n,int count)
{
     grid[i][j]=count;
    if(count==n*n-1)
    {
        // we at the last position
       
        display(grid,n);
        cout<<"*****\n";
        grid[i][j]=-1;
        return;
    }
  // from i,j we have to move to n*n
  // for every position we can go if it safe and not visited
  for(int k=0;k<8;k++)
  {
    if(issafe(grid,i+dx[k],j+dy[k],n))
    {
      grid[i+dx[k]][j+dy[k]]=count;
      f(grid,i+dx[k],j+dy[k],n,count+1);
        grid[i+dx[k]][j+dy[k]]=-1;
    }
  }
}

void knighttour(int n,int i,int j)
{
    vector<vector<int>> grid(n,vector<int>(n,-1)); // -1 means not visited
    grid[i][j]=0;
    f(grid,i,j,n,0);
}
int main()
{
    knighttour(5,0,0);
    return 0;
}