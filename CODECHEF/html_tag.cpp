#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //main code
    int t;
    cin>>t;
    while(t--){
        string tag;
        cin>>tag;
        if(tag[0]!='<' or tag[1]!='/' or tag[tag.length()-1]!='>'){
            cout<<"Error\n";
            continue;
        }
        int ctr=0;
        for(int i=2;i<tag.length()-1;i++){
            if((tag[i]>='a' and tag[i]<='z') or (tag[i]>='0' and tag[i]<='9')){
                ctr++;
            }
        }
        if(ctr==(tag.length()-3) and ctr>0){
            cout<<"Success\n";
        }
        else{
            cout<<"Error\n";
        }
    }
    return 0;
}