#include<iostream>
using namespace std;
 
class Node{
    public:
    int data ;
    Node* prev;
    Node* next;
Node(int d){
    this->data=d;
    this->prev=NULL;
    this->next=NULL;
}
~Node(){
    int val=this->data;
    //memory free
    if(this->next!=NULL){
        delete next;
        this->next=NULL;
    }
    cout<<"memory is free for node with data"<<val<<endl;
}
};

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
int getLengthNode(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertAtHead(Node* &head,int d){
    Node* temp =new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertAtPosition(Node* &head,Node* &tail,int position,int d){
if(position==1)
{
    insertAtHead(head,d);
    return;
}
Node* temp=head;
int cnt=1;
while(cnt<position-1){
    temp=temp->next;
    cnt++;
}
//insert at tail
if(temp->next==NULL){
    insertAtTail(tail,d);
    return;
}
//insert at middle
Node* nodeToInsert=new Node(d);
nodeToInsert->next=temp->next;
temp->next->prev=nodeToInsert;
temp->next=nodeToInsert;
nodeToInsert->prev=temp;
}

void deleteNode(Node* &head,int position){
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* currt=head;
    Node* prevs=NULL;
    int cnt=1;
    while(cnt<position){
        prevs=currt;
        currt=currt->next;
        cnt++;
    }
    currt->prev=NULL;
    prevs->next=currt->next;
    currt->next=NULL;
    delete currt;
    }
}
int main() {
Node* node1=new Node(10);
Node* head=node1;
Node* tail=node1;
print(head);
cout<<getLengthNode(head)<<endl;
insertAtHead(head,20);
print(head);
insertAtHead(head,30);
print(head);
insertAtHead(head,16);
print(head);
insertAtTail(tail,12);
print(head);
insertAtPosition(head,tail,3,99);
print(head);
deleteNode(head,5);
print(head);
cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail->data<<endl;
return 0 ;
}