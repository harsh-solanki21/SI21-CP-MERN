#include<bits/stdc++.h>
using namespace std;


class node {
public:
    int data;
    node* next;

    node(int value) {
        data = value;
        next = NULL;
    }
};


void insertAtHead(node* &head, int value) {

    node* n = new node(value);
    n->next = head;
    head = n;

}


void insertAtTail(node* &head, int value) {

    node* n = new node(value);

    if(head == NULL) {
        head = n;
        return;
    }

    node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;

}


bool search(node* head, int key) {

    node* temp = head;
    while(temp != NULL) {
        if(temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;

}


void display(node* head) {
    node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head); 
    insertAtHead(head, 4);
    display(head);
    cout<<search(head, 5)<<endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
