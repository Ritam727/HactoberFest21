#include<iostream>
#include<stack>
using namespace std;

bool isOperand(char c){
    if((c>=65 && c<=90)|| (c>=97 && c<=122) || (c>=48 && c<=57))
        return true;
    return false;
}

int evaluationPostfix(string s){
    stack<char> st;
    int x1,x2,r;

    for(int i=0;i<s.size();i++){

        if(isOperand(s[i])){
            st.push(s[i]-'0');
        }
        else{
            x2=st.top();
            st.pop();
            x1=st.top();
            st.pop();
            
            switch(s[i]){
                case '+':
                    r=x1+x2;
                    break;
                case '-':
                    r=x1-x2;
                    break;
                case '*':
                    r=x1*x2;
                    break;
                case '/':
                    r=x1/x2;
                    break;
            }
            st.push(r);
        }
    }
    return st.top();
}

int main(){

    string s="35*62/+4-";
    cout<<evaluationPostfix(s)<<endl;


    return 0;
}