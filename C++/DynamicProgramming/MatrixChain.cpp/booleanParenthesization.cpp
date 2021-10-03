#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define input(a) int a; cin>>a
#define vi vector<int>
#define pb push_back
#define pf push_front
#define emp emplace
#define mp make_pair
#define map map<int,int>
#define deq deque<int>
#define tests int t; cin >> t; while(t--)
#define FOR(a,b) for(int i = a;i<b;i++)
using namespace std;

int t[300][300];

int bp(string s,int i, int j, bool find){  ////boolean Parenthesization
    if(i>j){
        return t[i][j]=0;
    }
    if(i==j){
        if(find == true){
            if(s[i] == true){
                return t[i][j] = 1;
            }
            return t[i][j] = 0;
        }
        else{
            if(s[i]==false){
                return t[i][j]=1;
            }
            return t[i][j] = 0;
        }
    }

    int ans = 0;

    for(int k=i+1;k<j;k+=2){
        int lt = bp(s,0,k-1,true);
        int lf = bp(s,0,k-1,false);
        int rt = bp(s,k+1,j,true);
        int rf = bp(s,k+1,j,false);

        if(s[k] == '|'){
            if(find == true){
                ans = ans + (lt*rt) + (lt*rf) + (lf*rt);
                
            }

            else{
                ans = ans + (lf*rf);
                
            }
        }
        else if(s[k]=='&'){
            if(find==true){
                ans = ans + (lt*rt);
                
            }

            else{
                ans = ans + (lf*rt) + (lt*rf) + (lf*rf);
                
            }
        }
        else if(s[k]=='^'){
            if(find==true){
                ans = ans + (lt*rf) + (lf*rt);
                
            }

            else{
                ans = ans + (lt*rt) +(lf*rf);
                
            }
        }
    }
    return t[i][j] = ans;
}

int countWays(int n, string s){
    memset(t,-1,sizeof(t));

}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    

    return 0;
}