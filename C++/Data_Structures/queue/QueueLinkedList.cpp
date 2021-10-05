#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

class Queue{
    private:
        Node *front,*rear;
        int size;
        int maxSize;
    public:
        Queue(){
            size=0;
            maxSize=10;
            front=rear=NULL;
        }
        Queue(int maxSize){
            size=0;
            this->maxSize=maxSize;
            front=rear=NULL;
        }

        bool isEmpty(){
            return front==NULL;
        }

        bool isFull(){
            return size==maxSize;
        }

        void enqueue(int element){
            if(isFull()){
                cout<<"____Queue is Full____"<<endl;
            }
            else{
                Node *t=new Node;
                t->data=element;
                t->next=NULL;
                if(front==NULL){
                    front=rear=t;
                }
                else{
                rear->next=t;
                rear=t;
                }
                size++;
            }
        }

        int dequeue(){
            int x=-1;
            if(isEmpty()){
                cout<<"____Queue is Empty____"<<endl;
            }
            else{
                Node *p=front;
                front=front->next;
                x=p->data;
                delete p;
                size--;
            }
            return x;
        }

        void display(){
            if(isEmpty()){
                cout<<"____Queue is Empty____"<<endl;
                return;
            }
            Node *p=front;
            while(p!=NULL){
                cout<<p->data<<" ";
                p=p->next;
            }
            cout<<endl;
        }
};

int main(){

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    q.enqueue(90);
    q.enqueue(100);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();


    q.display();


    return 0;
}