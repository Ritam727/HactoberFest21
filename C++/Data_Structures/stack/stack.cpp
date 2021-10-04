//
// Created by abhi on 04/09/2021.
//

//stack - stores a list of items in which item store / removed from only one side #LIFO
#include<iostream>
using namespace std;
int n =100;
class stack{
    int top;
    int *arr;
public:
    stack(){
        top=-1;
        arr=new int[n];
    }
    int Top(){
        return (top!=-1)?arr[top]:-1;
    }
    void push(int val){
        if(top>n-1){
            cout<<"stack is overflowed\n";
            return;
        }
        top++;
        arr[top]=val;
    }
    void pop(){
        if(top==-1)return;
        top--;
    }
    bool empaty(){
        return top==-1;
    }

};
