//
// Created by abhi on 04/09/2021.
//

#include <iostream>
#include <string>
#include <stack>
using namespace std;
void reverseString(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string m=" ";
        while(s[i]!=' ' && i<s.length()){
            m+=s[i];
            i++;
        }
        st.push(m);
    }
    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    string data;
    data="Hey there! how you doing?";
    reverseString(data);
    return 0;

}