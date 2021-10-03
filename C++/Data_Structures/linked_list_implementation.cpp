#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define vc vector<char>
#define pb push_back
#define pf push_front
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

void Tail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        node* temp = head;
        temp = n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void Head(node* &head, int val){
    node* n = new node(val);
    
    n->next = head;
    head = n;
}
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

void delhead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
    return;
}
void deletion(node* &head, int val){

    if(head->next == NULL){
        delhead(head);
        return;
    }

    node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
}

node* revrec(node* &head){

    if(head==NULL||head->next == NULL){
        return head;
    }

    node* newhead = revrec(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead; 
}

int main(){

    node* head = NULL;
    Head(head,0);
    Tail(head,1);
    Tail(head,2);
    Tail(head,3);
    display(head);
    // deletion(head,2);
    // display(head);
    // delhead(head);
    // display(head);
    node* newhead = reverse(head);
    display(newhead);
    node* newnode = revrec(head);
    display(newhead);
    display(head);
    return 0;
}
