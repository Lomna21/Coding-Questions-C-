#include<bits/stdc++.h>
using namespace std;

//Linked List 
// Elements are not stored at contiguous memory location
// Elements are linked using pointers
class node{
    public:
        int data;
        node *next;
        //constructor
        node(int data){
            this->data = data;
            this->next = NULL;
        }
        //destructor
        ~node(){
            int value = this->data;
            //memory free
            if(this->next != NULL){
                delete next;
                this->next=NULL;
            }
            cout<<"memory is free for node with data"<<value<<endl;
        }
};

void insertAtHead(node *& head, int d){
    //new node created 
    node * temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail (node *& head, node *& tail, int d){
    //new node created 
    node *temp = new node(d);
    //if LL is empty.
    if(head == NULL){
        head = temp;
        tail = temp;
    }
    tail->next = temp;
    tail = temp;
}

void print(node *& head){
    if(head==NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

void insertAtPosition (node *& head , node *& tail , int position , int d){
    //insert at start
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    node * temp = head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    //insert at last position
    if(temp->next == NULL){
        insertAtTail(head, tail ,d);
    }
    //inserting in between. creating a node for d.
    node * nodeToInsert = new node(d);
    //PHELE JODENGE AND PHIR TODENGE
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position , node *& head){
    //deleting first or starting node.
    if(position==1){
        //hum 2 isliye banate kyoki hum traverse kar paye and beech me gum na hojaye.
        node * temp = head;
        head = head->next;
        //memory free start node
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting any middle or last node
        node *curr = head;
        node *prev = NULL;
        int count = 1;
        while (count <position){
            prev = curr;
            curr = curr -> next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}