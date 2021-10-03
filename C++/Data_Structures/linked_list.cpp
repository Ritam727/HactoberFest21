#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first;

void create(int A[],int n){
    int i;
    struct node *temp,*last;
    first = new node();
    first->data=A[0];
    first->next=NULL;
    last=first;

    for (i = 1; i < n; i++)
    {
        temp = new node();
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last=temp;
    }
    
}

void display(struct node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    int A[] = {3,5,7,10,15};
    create(A,5);
    display(first);
    return 0;
}