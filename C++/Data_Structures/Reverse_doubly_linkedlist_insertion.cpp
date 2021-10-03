#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *prev, *next;
};
  
Node* newNode(int n)
{
   Node* temp=new Node;
   temp->data=n;
   temp->prev = temp->next=nullptr;
   return temp;
}
void display(Node* head)
{
   while (head->next!=nullptr) {
      cout<< head->data <<" ";
      head=head->next;
      }
   cout<<head->data<<endl;
}
void insert(Node** head, int node_data)
{
   Node* temp = newNode(node_data);
   temp->next=*head;
   (*head)->prev=temp;
   (*head)=temp;
}
void reverse(Node**head)
{
   Node*left=*head,*right=*head;
   while (right->next!=nullptr)
   right=right->next;
   while (left!=right&&left->prev!=right) {
      swap(left->data, right->data);
      right=right->prev;
   }
}
int main()
{
   Node* headNode=newNode(5);
   insert(&headNode,4);
   insert(&headNode,3);
   insert(&headNode,2);
   insert(&headNode,1);
   cout <<"Original doubly linked list: " << endl;
   display(headNode);
   cout << "Reverse doubly linked list: " << endl;
   reverse(&headNode);
   display(headNode);
  
   return 0;
}
