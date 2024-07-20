// Remove duplicate element from linked list without using temperory buffer
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

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void deletehead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deleteAt(node* &head, int val){
    if (head == NULL){
        return;
    }
    else if (head->data == val){
        deletehead(head);
        return;
    }
    else if (head->next == NULL){
        return;
    }
    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void removeDuplicates(node*& head) {
    node* current = head;
    while (current != NULL) {
        node* runner = current;
        while (runner->next != NULL) {
            if (current->data == runner->next->data) {
                runner->next = runner->next->next;
            } else {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}

int main() {
    node* head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 20);
    display(head);
    removeDuplicates(head);
    display(head);
    return 0;
}