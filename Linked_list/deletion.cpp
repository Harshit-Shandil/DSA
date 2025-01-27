#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next; 
};

void insertathead(struct Node** head_ref, int newdata){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));

    newnode->data=newdata;
    newnode->next=(*head_ref);

    //move head 
    (*head_ref)=newnode;
}


void deletenode(struct Node** head_ref, int key){
    struct Node *temp = *head_ref, *prev;
    if(temp->data!=key)
    {
        cout<<"Node not found"<<endl;
    }
    else{
        if(temp!=NULL && temp->data==key){
        *head_ref=temp->next;
        free(temp);
        return;
    }

    while(temp!=NULL && temp->data!=key){
        prev=temp;
        temp=temp->next;
    }

    if(temp==NULL)
    return;

    prev->next=temp->next;
    free(temp);
}
}
    

void print(struct Node* node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
}

int main()
{
    struct Node* head =NULL;
    insertathead(&head,2);
    insertathead(&head,4);
    insertathead(&head,5);
    insertathead(&head,9);
    
    cout<<"printing headnodes"<<endl;
    print(head);
    
    cout<<endl;
    deletenode(&head,9);
    print(head);
    return 0;
}