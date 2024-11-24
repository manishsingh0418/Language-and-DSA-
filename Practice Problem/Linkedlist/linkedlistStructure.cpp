#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
void display(Node *head){
    Node*curr=head;
while(curr!=NULL)
{
    cout<<curr->data<<"->";
    curr=curr->next;
}
cout<<"NULL";
}
int main()
{
 Node *head= new Node(10);
 Node *temp= new Node(30);
 Node *temp2= new Node(30);
 head->next=temp;
 temp->next=temp2;
 display(head);
 return 0;
}