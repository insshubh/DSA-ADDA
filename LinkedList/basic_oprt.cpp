#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
       head=head->next;
       
    }
    cout<<endl;
}
node* insert_atbeg(node *head,int dat)
{
    // This is for inserting element at first
    node* inst = new node;
    inst->data=dat;
    inst->next=head;
    head=inst;
    

    return inst;

}
node* insert_at_lst(node*head,int dat)
{
    // This is for inserting at last
    node*temp=new node;
    node*ptr;
    temp->data=dat;
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->next=NULL;

    return head;
}
node* insert_At(node*head,int dat)
{
    // This iss for insert at between
    node*temp= new node;
    temp->data=25;
    node*ptr;
    ptr=head;
    while(ptr->next->data!=dat)
    {
        ptr=ptr->next;
    }
    temp->next=ptr->next;
    ptr->next=temp;

}
node* delete_atfst(node*head)
{
    node*ptr;
    ptr=head->next;
    delete(head);

    head=ptr;
    return head;

}
void delete_lst(node*head)
{
    node*ptr=head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;

    }
    delete(ptr->next->next);
    ptr->next=NULL;
   
    
}
void delete_At(struct node* head,int data)
{
    node*ptr=head;
    node*temp=head->next;
    while(temp->data!=data)
    {
        ptr=ptr->next;
        temp=temp->next;
    }
    ptr->next=temp->next;
    delete(temp);
}
node*rev(node*head)
{
     node*prev=NULL;
     node*temp;
    
    while(head)
    {
       temp=head->next;
       head->next=prev;
       prev=head;
       head=temp;
    }
    
    return head;
}
int main()
{
    int arr[5]={1,4,5,56,12};
    node *head=new node;
    head->data=arr[0];
    node*temp=head;
    for(int i=1;i<5;i++)
    {
      temp->next=new node;
      temp=temp->next;
      temp->data=arr[i];
    }
    temp->next=NULL;
    print(head);
    cout<<endl;
    // head =insert_atbeg(head,45);
    // print(head);
    // insert_at_lst(head,67);
    // print(head);
    // insert_At(head,56);
    // print(head);
    // head=delete_atfst(head);
    // print(head);
    // delete_lst(head);
    // print(head);
    // delete_At(head,56);
    // print(head);
   head= rev(head);
    print(head);
    return 0;
}