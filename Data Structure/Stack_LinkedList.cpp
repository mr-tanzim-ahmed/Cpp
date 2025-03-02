#include<bits/stdc++.h>
using namespace std;

struct Stack{
    int top;
    unsigned capacity;
    int* array;
};
struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));
    (*stack).capacity=capacity;
    (*stack).top=-1;
    (*stack).array=(int*)malloc(sizeof(struct Stack));
    return stack;
}
int  isFull(struct Stack* stack)
{
    return (*stack).top==(*stack).capacity - 1;
}
int isEmpty(struct Stack*  stack)
{
    return (*stack).top=-1;
}
void push(struct Stack* stack,int item)
{
    if(isFull(stack))
        return;
    (*stack).array[(*stack).top++]= item;
    cout<<item<<" pushed to stack\n";
}
int pop(struct Stack* stack)
{
    if(isEmpty(stack))
        return INT_MIN;
    return (*stack).array[(*stack).top--];
}
int main()
{
    struct Stack* stack= createStack(100);

    push(stack, 10);
    push(stack, 20);

    int item = pop(stack);
    cout<<item<<endl;
}
