
#include <bits/stdc++.h>
using namespace std;
vector<int>parent ;
int findOp(int x){
    if(parent[x]==-1){
        return x;
    }
    return findOp(parent[x]);
}
void unionOp(int arSc, int arDes){
    parent[arSc]=arDes;
}
int main()
{
    int v,e,sc,des,arSc,arDes;
    cin>>v>>e;
    parent.resize(v,-1);
    
    for(int i=0;i<e;i++){
        cin>>sc>>des;
        arSc=findOp(sc);
        arDes=findOp(des);
        if(arSc==arDes){
            cout<<"Cyce exist!"<<endl;
            return 0;
        }
        else{
            unionOp(arSc,arDes);
            
        }
        
    }
    cout<<"Cycle not exist."<<endl;
}