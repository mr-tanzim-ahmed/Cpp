#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
};
Node *create_node(int item, Node *next)
{
    Node *new_node= (Node*)malloc(sizeof(Node));
    if(new_node==nullptr)
    {   cout<<"Error!";
        exit(1);
    }
    new_node->data=item;
    new_node->next=next;
    return new_node;
}
Node* remove_node(Node* head, Node* node)
{
    if(head=node)
    {
        head=node->next;
        free(node);
        return head;
    }
    Node* current_node=head;
    while(current_node!=nullptr){
        if(current_node->next==node)
        {
            break;
        }
        current_node= current_node->next;
    }
        if(current_node==nullptr)
        {
            return head;
        }
        current_node->next=node->next;
        free(node);
        return head;
}
Node* prepend(Node* head, int item)
{
    Node* new_node= create_node(item,head);
    return new_node;
}
Node* append(Node* head,int item)
{
    Node* new_node=create_node(item,nullptr);
    if(head==nullptr)
        return head;
    Node* current_node=head;
    while(current_node != nullptr)
    {
        current_node=current_node->next;
    }
    current_node->next=new_node;
    return head;
}
void insert(Node* node,int item)
{
    Node* new_node= create_node(item, node->next);
    node->next=new_node;//Assign new_node pointer into next pointer
}
int main()
{
    Node* n1;  //n1 is head
    n1=create_node(10,nullptr);
    Node* n2= create_node(20,nullptr);
    n1->next=n2;
    Node* current_node=n1;
    while(current_node != nullptr)
    {
        cout<<current_node->data<<" ";
        current_node= current_node->next;//go to next node (or, node++)
    }
    cout<<endl;
    Node* new_head=remove_node(n1,n1);
    cout<<new_head->data<<endl;
    delete new_head;
}
