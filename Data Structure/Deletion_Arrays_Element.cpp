#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[]={1,2,3,4,5};
    int length = sizeof(ara)/sizeof(ara[0]);
    int item = 4;
    int position= 3;


    for(int i=position;i<length;i++)
    {
        ara[i]=ara[i+1];
    }
    length--;
    for(int i=0;i<=length;i++)
        cout<<ara[i]<<" ";
    cout<<endl;
}
