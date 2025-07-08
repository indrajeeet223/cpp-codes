// through link list implementation of graph
// Adjacency list representation of graph
// array of link list is used to represent the graph
#include<iostream>
#include<vector>
#include<list>
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
void display(){
    for(int i=0;i<graph.size();i++)
    {
        cout<<i<<"-->";
        for(auto ele : graph[i])
        {
            cout<<ele<<" , ";
        }
        cout<<"\n";

    }
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
    display();
}