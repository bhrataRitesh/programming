#include<iostream>
using namespace std;
 

 class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        //memory free
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
 };

void insertAtHead(Node* &head,int d){

    //create new node
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    
    if(position==1){
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

    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
    

}
void deleteNode(Node* &head,int position){

    if(position==1){
        Node* temp=head;
        head=head->next;

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
    prevs->next=currt->next;
    currt->next=NULL;
    delete currt;
    }

}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    //created new node
Node* node1=new Node(10);
// cout<<node1->data<<endl;
// cout<<node1->next <<endl;

//head pointed to node1
Node* head =node1;
Node* tail=node1;

print(head);

cout<<"========"<<endl;
// called insertAtNode
insertAtTail(tail,12);

print(head);

insertAtTail(tail,15);

print(head);

insertAtPosition(head,tail,4,22);
print(head);
cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail->data<<endl;

deleteNode(head,3);
print(head);\

cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail->data<<endl;
return 0 ;
}