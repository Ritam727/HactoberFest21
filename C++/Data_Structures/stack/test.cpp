//
// Created by abhi on 04/09/2021.
//
#include "stack.cpp"
int main(){

    stack st;
    st.push(15);
    st.push(16);
    st.push(18);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empaty()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empaty();



}
