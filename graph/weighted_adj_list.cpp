// through link list implementation of graph
// Adjacency list representation of graph
// array of link list is used to represent the graph
#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<pair<int,int>>>graph;   //  weighted graph .

int n;
// for number of vertices 
void edges(int src,int dest ,int wt,bool bi_dir=true )  // for bi directional graph .
{
    graph[src].push_back({dest,wt});
    if(bi_dir)
    {
        graph[dest].push_back({src,wt});
    }
}

void display(){
    for(int i=0;i<graph.size();i++)
    {
        cout<<i<<"-->";
        for(auto ele : graph[i])
        {
            cout<<"("<<ele.first<<" "<<ele.second<<"),";
             
        }
        cout<<"\n";

    }
}

int main() 
{
    cin>>n;
    graph.resize(n,list<pair<int,int>>());
    int e;
    cin>>e;
    while(e--)
    {
        int s,d,wt;
        cin>>s>>d>>wt;
        edges(s,d,wt);
    }
    display();
}