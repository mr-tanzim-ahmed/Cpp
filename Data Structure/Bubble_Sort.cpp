#include<iostream>
using namespace std;
int main()
{
    int ara[]={10,80,41,85,99,50,14,20};
    int len= sizeof(ara)/sizeof(ara[0]);
    cout<<"Before Sorted:"<<endl;
    for (int i = 0; i < len; ++i) {
        cout << ara[i] << " ";
    }

    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len-i-1;j++)
            {
            if(ara[j]>ara[j+1])
            {
                int temp=ara[j];
                    ara[j]=ara[j+1];
                    ara[j+1]=temp;
            }
            }
    }
    cout<<"\nAfter Sorted: "<<endl;
    for (int i = 0; i < len; i++) {
        cout << ara[i] << " ";
    }
}
