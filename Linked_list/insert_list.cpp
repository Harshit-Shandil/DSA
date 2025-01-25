#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    //Default constructor 
    Node(){
        data=0;
        next=NULL;
    }

    Node(int data){
        this->data =data;
        this->next =NULL;
    }

};

class Linkedlist{
        Node *head;

        public:
        Linkedlist(){
            head =NULL;
        }

        void insertathead(int data){
            
            Node *newNode =new Node(data);

            if(head==NULL){
                head= newNode;
                return;
            }

            newNode->next=this->head;
            this->head=newNode;
        }
        void print(){
            Node *temp=head;
            if(head==NULL){
                cout <<"Getting empty LIST"<<endl;
                return;
            }

            while(temp!=NULL){
                cout<< temp->data<<" ";
                temp= temp->next;
            }
        }
    
};


int main()
{
    // link list object;
    Linkedlist list;

    list.insertathead(10);
    list.insertathead(20);
    list.insertathead(30);
    list.insertathead(40);

    cout<<"Inserted at HEAD :Elements of linked list are: "<<endl;
    list.print();
    cout<<endl;
    
    return 0;
}