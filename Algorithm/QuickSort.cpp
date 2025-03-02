#include <iostream>
using namespace std;
int partition(int ara[],int beg,int end){
    int pivot= ara[end];
    int i,j;
    for(i=beg-1,j=beg;j<end;j++){
        if(ara[j]<pivot){
        i++;
        swap(ara[i],ara[j]);

        }
    }
    swap(ara[i+1],ara[end]);
    return i+1;
}
void quickSort(int ara[],int beg,int end){
    if(beg<end){
        int pi=partition(ara,beg,end);
        quickSort(ara,beg,pi-1);
        quickSort(ara,pi+1,end);
    }
}
int main()
{
    int ara[]={5,7,1,6,3,2,9,8,4};
    int n=9;
    quickSort(ara,0,n-1);
    for(int i=0;i<n;i++){
        cout<<ara[i]<<" ";
    }
    return 0;
}
