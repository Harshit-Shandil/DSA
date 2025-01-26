#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

void insertatend(Node **head, int data){
    Node *newNode=new Node();

    newNode->data=data;
    newNode->next=NULL;
    if(*head==NULL)
    {
        *head=newNode;
        cout<<newNode->data<<endl;
        return;

    }

    struct Node* temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    // cout<<newNode->data<<" in "<<endl;
}


void print(Node *node)
{
    while(node!=NULL)
    {
        
        cout<<node->data<<" ";
        node=node->next;
    }
    cout<<endl;
}


int main()
{
    Node* head =NULL;

    insertatend(&head,10);
    insertatend(&head,20);
    insertatend(&head,30);
    insertatend(&head,40);

    cout<<"Inserted at END :Elements of linked list are:"<<endl;
    print(head);
    cout<<endl;
    return 0;
}