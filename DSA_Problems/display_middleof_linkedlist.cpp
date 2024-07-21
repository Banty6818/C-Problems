// Display Middle Node of singly linked list
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if (head == NULL){
        head = n;
        return;
    }
    
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void displayMiddle(node* head){
    int count=0;
    node* temp = head;
    while(temp->next!=NULL){
        count++;
        temp = temp->next;
    }
    
    node* temp1 = head;
    int mid = count/2;
    for(int i=0; i<mid; i++){
        temp1=temp1->next;
    }
    cout<<"Middle Element:"<<temp1->data;
}

int main() {
    node* head=NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);
    displayMiddle(head);

    return 0;
}