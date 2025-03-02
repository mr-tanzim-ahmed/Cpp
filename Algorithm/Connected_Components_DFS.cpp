#include <bits/stdc++.h>
using namespace std;
stack<int>stk;
vector<bool>visited;

void dfs(vector<int>adjList[],int start){
  stk.push(start);
  visited[start]=true;
  
  while(!stk.empty()){
    int top= stk.top();
    cout<<top<<" ";
    stk.pop();
  
    for(auto e:adjList[top]){
      if(!visited[e]){
        stk.push(e);
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
    for(i=0;i<v;i++){
      if(!visited[i]){
        dfs(adjList,i);
      }
    }
    //dfs(adjList,0);
}