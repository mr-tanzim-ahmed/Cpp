#include <bits/stdc++.h>
using namespace std;
vector<int>parent;
int findOp(int x){
    if(parent[x]==-1) return x;
    return findOp(parent[x]);
}
void unionOp(int u,int v){
    parent[u]=v;
}
bool sortByWt(tuple<int,int,int>a,tuple<int,int,int>b){
    return get<2>(a) < get<2>(b);
}
void print(vector<tuple<int,int,int> >edgeList){
    for(auto e:edgeList){
        int sc=get<0>(e);
        int des=get<1>(e);
        int wt=get<2>(e);
        cout<<sc<<" "<<des<<" "<<wt<<endl;
    }
}
int main()
{
    int v,e;
    int sc,des,wt;
    cin>>v>>e;
    parent.resize(v,-1);
    vector<tuple<int,int,int> >edgeList,output;
    for(int i=0;i<e;i++){
        cin>>sc>>des>>wt;
        edgeList.push_back(make_tuple(sc,des,wt));
    }
    sort(edgeList.begin(),edgeList.end(),sortByWt);
        
    for(auto e:edgeList){
         sc=get<0>(e);
         des=get<1>(e);
         wt=get<2>(e);
         int arSc=findOp(sc);
         int arDes=findOp(des);
         if(arSc != arDes){
             unionOp(arSc,arDes);
             output.push_back(e);
         }
    }
    print(output);
    
}