#include<bits/stdc++.h>
using namespace std;
#define size 10
class Queue{
    public:
    int array[size+1];
    int head,tail;
};
void enqueue(Queue *q, int item)
{
    if((q->tail+1)%(size+1)==q->head )
    {
        cout<<"Full";
        return;
    }
    q->array[q->tail]=item;
    q->tail=(q->tail+1) %(size +1);
}
int dequeue(Queue *q)
{
    int item;
    if(q->tail==q->head)
    {
        cout<<"Empty";
        return -1;
    }
    item= q->array[q->head];   //for returning item value,the value is assigned by  item
    q->head = (q->head+1)%(size+1);
    return item;
}
int main()
{
    Queue queue ;
    int item;
    queue.head=0;
    queue.tail=0;
    enqueue(&queue, 25);
    enqueue(&queue, 30);
    enqueue(&queue, 40);
    item = dequeue(&queue);
    cout<<item<<endl;
    item = dequeue(&queue);
    cout<<item<<endl;
}
