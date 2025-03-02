#include<iostream>
using namespace std;
struct s
{
    char ch;
    int n;
    char str[16];
}sv;
union u
{
    char ch;
    int n;
    char str[16];
}uv;
int main()
{   struct s one;
    int struct_size,union_size;
    struct_size=sizeof(sv);
    union_size=sizeof(uv);
    cout<<"size : "<<sizeof()<<endl;
    cout<<"Structure: "<<struct_size<<" bytes"<<endl;
    cout<<"union: "<<union_size<<" bytes";
}
