#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
Node* insertAtHead(int val,Node* &head,Node* &tail){
    Node* newNode=new Node(val);
    if(head==NULL && tail==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
    return head;
};
Node* insertAtTail(int val,Node* &head,Node* &tail){
    Node* newNode=new Node(val);
    if(head==NULL && tail==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
    return tail;
};
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    
    insertAtTail(10,head,tail);
    insertAtTail(20,head,tail);
    insertAtTail(30,head,tail);

    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }

    return 0;
}