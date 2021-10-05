// Problem : https://codeforces.com/problemset/problem/1566/C

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main(){
    int t;
    cin>>t;
    while(t--){
 
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int ans=0;
    int flag[n]={0};
    for(int i=0;i<n;i++){
        
        if(s1[i]!=s2[i]){
            ans+=2;
        }
        else if(s1[i]=='0'&&s2[i]=='0'){
            if(i!=0&&i<n-1){
                if((s1[i-1]=='1'&&s2[i-1]=='1')&&flag[i-1]!=1)
                {ans+=2;flag[i-1]=1;}
                else if((s1[i+1]=='1'&&s2[i+1]=='1')&&flag[i+1]!=1)
                {ans+=2;flag[i+1]=1;}
                else{ans+=1;}
            }
            if(i==0){
                if((s1[i+1]=='1'&&s2[i+1]=='1')&&flag[i+1]!=1){ans+=2;flag[i+1]=1;}
                else{ans+=1;}
            }
            else if(i==n-1){
                if((s1[i-1]=='1'&&s2[i-1]=='1')&&flag[i-1]!=1){ans+=2;flag[i-1]=1;}
                else{ans+=1;}
            }
        }
    }
    cout<<ans<<endl;
 
    }
    return 0;
}