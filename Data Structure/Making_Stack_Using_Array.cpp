#include<bits/stdc++.h>
using namespace std;

typedef struct{
    int top;
    int array[10];

}Stack;
void push(Stack *s, int item)
{
    if(s->top<10)
    {
        s->array[s->top]=item;
        s->top++;
    }
    else cout<<"Full"<<endl;
}
int pop(Stack *s)
{
    int item;
    if(s->top==0)
    {
        cout<<"Empty!"<<endl;
        return -1;
    }
    else{
        s->top--;
        item= s->array[s->top];
    }
    return item;
}
int main()
{
    Stack stack;
    int item;
    stack.top=0;
    push(&stack,1);
    push(&stack,20);
    push(&stack,40);
    push(&stack,60);
    item= pop(&stack);
    cout<<item<<endl;
    item= pop(&stack);
    cout<<item<<endl;
}

