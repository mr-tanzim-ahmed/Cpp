#include<iostream>
#include<string.h>
using namespace std;
typedef struct
{
    char first[20], last[20];
}nametype;
typedef struct
{
    int id;
    nametype name;
    char grade[3];

}studenttype;
void calculate_grade(studenttype* s,int mark)
{
    if(mark>=80)
        strcpy(s->grade,"A+");
    else if(mark>=70)
        strcpy(s->grade,"A");
    else if(mark>=60)
        strcpy(s->grade,"A-");
    else if(mark>=50)
        strcpy(s->grade,"B");
    else if(mark>=40)
        strcpy(s->grade,"C");
    else
        strcpy(s->grade,"F");

}
int main()
{
    studenttype student[3];
    int i,n=1;
    int mark[]={72,82,60};
    for(i=0;i<n;i++){
        cout<<"Enter the ID for student:"<<i+1;
        cin>>student[i].id;
        cout<<"Enter the first name:"<<i+1;
        cin>>student[i].name.first;
        cout<<"Enter the last name:"<<i+1;
        cin>>student[i].name.last;

        strcpy(student[i].grade,"");
        cout<<endl;

    }

    for(i=0;i<n;i++)
    {
        calculate_grade(&student[i],mark[i]);
    }
        cout<<"Output:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"ID:"<<student[i].id<<endl;
        cout<<"Name:"<<student[i].name.first<<" "<<student[i].name.last<< endl;
        cout<<"Grade:"<<student[i].grade<<endl;
    }

}
