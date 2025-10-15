#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        this->data=val;
        this->next=NULL;
    }
    ~Node(){
        if(this->next!=NULL){
            delete this->next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data "<<this->data<<endl;
    }
};
void insertathead(Node* &head,int val){
    Node* n=new Node(val);
    n->next=head;
    head=n;
}
void insertatend(Node* &head,int val){
    Node*temp = head;
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void inseratpos(Node* &head,int val,int pos){
    Node* n=new Node(val);
    Node* p=head;
    if(pos==1){
        insertathead(head,val);
        return;
    }
    int count=1;
    while(count!=pos-1){
        p=p->next;
        count++;
    }
    n->next=p->next;
    p->next=n;
}
void deletpos(Node* &head,int pos){
    Node* p=head;
    Node* q=NULL;
    if(pos==1){
        head=head->next;
        p->next=NULL;
        delete p;
        return;
    }
    int cnt=1;
    while(cnt<pos-1){
        p=p->next;
        cnt++;
    }
    q=p->next;
    p->next=q->next;
    q->next=NULL;
    delete q;
}
int main(){
    Node* head=NULL;
    insertathead(head,10);
    insertathead(head,20);
    insertathead(head,30);
    print(head);
    insertatend(head,45);
    print(head);
    inseratpos(head,100,3);
    print(head);
    deletpos(head,3);
    print(head);
    return 0;
}