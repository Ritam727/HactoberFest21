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

int t[200][200];
int solve(int arr[], int i, int j){
    if(i>=j) return 0;
    int ans = INT_MAX;
    if(t[i][j]!=-1) return t[i][j];

    for(int k=i;k<j;k++){
        int tempAns = solve(arr,i,k) + solve(arr,k+1,j) + (arr[i-1]*arr[k]*arr[j]);
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
    

    return 0;
}