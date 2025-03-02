#include <bits/stdc++.h>
using namespace std;
stack<int>stk;
vector<bool>visited;

void dfs(vector<int>adjList[],int start){
  visited[start]=true;
  
  for(auto e: adjList[start]){
    if(!visited[e])
      dfs(adjList,e);
  }
  stk.push(start);
}

int main() 
{
    int v,e,sc,des;
    cin>>v>>e;
    vector<int>adjList[v];
    visited.resize(v,false);
    
    for(int i=0;i<e;i++){
      cin>>sc>>des;
      adjList[sc].push_back(des);
    }
    for(int i=0;i<v;i++){
      if(!visited[i]){
        dfs(adjList,i);
      }
    }
    while(!stk.empty()){
      int top=stk.top();
      cout<<top<<" ";
      stk.pop();
    }
}