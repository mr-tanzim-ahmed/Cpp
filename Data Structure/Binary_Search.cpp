#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int ara[]={1,3,5,7,13,17,19,23,29,31,37,41,43,47,53,59};
    int len= sizeof(ara)/sizeof(ara[0]);
    bool a=false;
    int beg=0;
    int end = len-1;
    int mid= (beg+end)/2;
    int item=47;

    for(int i=0;i<sqrt(len);i++)
    {

        if(item<ara[mid])
            end=mid-1;
        else if(item>ara[mid])
            beg=mid+1;
        mid = (beg+end)/2;
        if(item==ara[mid]){
            a=true;
            break;
        }
    }
    if(a)
        cout<<item<<" Found in "<<mid<<"th";
    else
        cout<<"Not found";
}
