#include <iostream>
using namespace std;
void merge(int ara[],int beg,int mid, int end){
    int len1=mid-beg+1;
    int len2= end-mid;
    int L[len1], R[len2];
    for(int i=0;i<len1;i++){
        L[i]= ara[beg+i];
    }
    for(int i=0;i<len2;i++){
        R[i]=ara[mid+i+1];
    }
    int i=0, j=0, k=beg;
    while(i<len1 && j<len2){
        if(L[i]<R[j]){
            ara[k]=L[i];
            i++;
        }
        else{
            ara[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<len1){
        ara[k]=L[i];
        i++;
        k++;
    }
    while(j<len2){
        ara[k]=R[j];
        j++;
        k++;
    }
}
void mergeSort(int ara[],int beg,int end){
    if(beg<end){
        int mid=beg+ (end-beg)/2;
        mergeSort(ara,beg,mid);
        mergeSort(ara,mid+1,end);
        merge(ara,beg,mid,end);
    }
}
int main()
{
    int ara[]={1,5,20,4,6,8,7,12};
    int len= sizeof(ara)/sizeof(ara[0]);

    mergeSort(ara,0,len-1);
    for(int i=0;i<len;i++){
        cout<<ara[i]<<" ";
    }

    return 0;
}
