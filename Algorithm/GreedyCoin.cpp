#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>coin,int amount){
    int count =0;
    sort(coin.begin(),coin.end(),greater<int>());
    int n= coin.size();
    for(int i=0;i<n;i++){
        if(amount>=coin[i])
        {
            count= count+ (amount/coin[i]);
            amount= amount%coin[i];
        }
        if(amount==0)return count;
    }
    return -1;
}
int main(){
    int amount;
    cin>>amount;
    vector<int>coin={2,1,5};
    int ans= solve(coin, amount);
    cout<<ans<<endl;
}
