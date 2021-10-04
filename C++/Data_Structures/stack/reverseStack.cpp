//
// Created by abhi on 05/09/2021.
//

#include "stack.cpp"
void pushOnBottom(stack &st,int ele){
    if(st.empaty()){
        st.push(ele);
        return;
    }
    int topele = st.Top();
    st.pop();
    pushOnBottom(st,ele);
    st.push(topele);
}
void reverseStack(stack &st){
    if(st.empaty()){
        return;
    }
    int ele=st.Top();
    st.pop();
    reverseStack(st);
    pushOnBottom(st,ele);

}

int main(){
    stack st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
 
    reverseStack(st);
    while(!st.empaty()){
        cout<<st.Top()<<" ";
        st.pop();
    }

    return 0;
}