//
// Created by abhi on 07/09/21.
//

#include<stack>
#include <iostream>
#include <string>
using namespace std;
bool VaildPAranthesis(string s){
    stack <char> brack;
    for(char i:s){
        if(i=='(' || i=='{' || i=='['){
            switch (i) {
                case '(':
                    brack.push(')');
                    break;
                case '{':
                    brack.push('}');
                    break;
                case '[':
                    brack.push(']');
                    break;

            }
        }else{ cout<<i<<" "<<brack.top()<<endl;
            if(i!=brack.top())return false;

            else brack.pop();
        }
    }
    if(brack.empty())return true;
}

int main(){
    cout<<VaildPAranthesis("{[()]}")<<endl;
    return 0;
}