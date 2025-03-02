#include<iostream>
#include<string>
using namespace std;

int main()
{
    int ara[]={4,8,9};
    //
    int *ara2= (int*)malloc(3*sizeof(int));
    *ara2=4;
    *(ara2+1)=8;
    *(ara2+2)=9;
    for(int i=0;i<3;i++)
    {
        cout<<*(ara2 +i)<<endl;
    }


}
