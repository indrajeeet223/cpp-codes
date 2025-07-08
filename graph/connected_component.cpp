// through link list implementation of graph
// Adjacency list representation of graph
// array of link list is used to represent the graph
#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>>graph;   //  undirected_unweighted_graph
int n;
// for number of vertices 
void edges(int src,int dest ,bool bi_dir=true )  // for bi directional graph .
{
    graph[src].push_back(dest);
    if(bi_dir)
    {
        graph[dest].push_back(src);
    }
}
void directional(int src,int dest ,bool bi_dir=false  )  // for  directional graph .
{
    graph[src].push_back(dest);
    if(bi_dir)
    {
        graph[dest].push_back(src);
    }
}
void fds(int node,unordered_set<int>&visited)
{
   visited.insert(node);
    for(auto ele : graph[node])
    {
         if(not visited.count(ele))
         {
              fds(ele,visited);
         }
        
    }
}
int connected_component()
{
    unordered_set<int>visited;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(visited.count(i)==0)
        {
            count++;
            fds(i,visited);
        }
    }
    return count;
}

int main()
{
    cin>>n;
    graph.resize(n,list<int>());
    int e;
    cin>>e;
    while(e--)
    {
        int s,d;
        cin>>s>>d;
        edges(s,d);
    }
    cout<<connected_component();
}