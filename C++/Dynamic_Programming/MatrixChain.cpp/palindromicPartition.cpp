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

int t[2000][2000];

bool isPalindrome(string s, int i, int j){
    while(i<j){
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}
int solve(string s, int i, int j){
    if(isPalindrome(s,i,j)){
        return t[i][j]=0;
    } 
    if(i>=j) return t[i][j]=0;
    
    int ans = INT_MAX;
    if(t[i][j]!=-1) return t[i][j];

    for(int k=i;k<j;k++){
        int tempAns = solve(s,i,k) + solve(s,k+1,j) + 1;
        if(tempAns < ans){
            ans = tempAns;
        }
    }
    return t[i][j]=ans;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    memset(t,-1,sizeof(t));
    string s; cin>>s;
    cout<<solve(s, 0, s.length()-1);
    return 0;
}