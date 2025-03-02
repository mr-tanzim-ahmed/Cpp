#include <bits/stdc++.h>
using namespace std;
queue<int>q;
vector<bool>visited;

void bfs(vector<int>adjList[],int start){
  q.push(start);
  visited[start]=true;
  
  while(!q.empty()){
    int top= q.front();
    cout<<top<<" ";
    q.pop();
  
    for(auto e:adjList[top]){
      if(!visited[e]){
        q.push(e);
        visited[e]=true;
      }
    }
  }
}


int main() 
{
    int v,e,i,j,sc,des;
    cin>>v>>e;
    vector<int> adjList[v];
    
    visited.resize(v,false);
    
    for(i=1;i<=e;i++){
      cin>>sc>>des;
      if(sc==des){
        adjList[sc].push_back(des);
      }
      else{
        adjList[sc].push_back(des);
        adjList[des].push_back(sc);
      }
    }
    
    
    bfs(adjList,0);
}