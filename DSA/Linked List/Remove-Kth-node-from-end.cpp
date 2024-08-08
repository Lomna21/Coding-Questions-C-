#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    { 
        this->data = data;
        next = nullptr;
    }
};


// You have been given a singly Linked List of 'N' nodes with integer data and an integer 'K'. Your task is to remove the 'K'th node from the end of the given Linked List and return the head of the modified linked list.

class Solution {
public:
    Node* removeNthFromEnd(Node* head, int n) {
        
        // naive solution 
        // T.C => O(N)
        /*
        int cnt =0; 
        Node* temp = head; 
        while(temp!=nullptr){
            cnt++;
            temp= temp->next;
        }
        if(cnt ==n){
            Node* newhead = head->next; 
            delete head;
            return newhead;
        
        }
        int res = cnt-n;
        temp= head;
        while(temp!=nullptr){
            res--;
            if(res==0){
                break;
            }
            temp = temp->next;
        }
        Node* deletenode = temp->next;
        temp->next = temp->next->next;
        delete deletenode;
        

        return head;
        */

        // better solution 
        // T.C => O(N)
        Node* fast = head; 
        for(int i =1; i<=n;i++){
            fast = fast->next;
        }
        if(fast==nullptr){
            Node* newhead = head->next;
            delete head; 
            return newhead;
        }
        Node* slow = head;
        while(fast->next!=nullptr){
            slow = slow->next;
            fast= fast->next;
        }
        Node* deletenode = slow->next;
        slow->next = slow->next->next;
        delete deletenode;

        return head;
    }
};