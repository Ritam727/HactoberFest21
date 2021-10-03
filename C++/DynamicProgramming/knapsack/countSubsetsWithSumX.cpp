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

int countSubsets(int n, int arr[], int x){
    bool t[n+1][x+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<x+1;j++){
            if(i==0){
                if(j==0) t[i][j]=true;
                else t[i][j]=false;
            }
            else if(j==0){
                t[i][j]=true;
            }
            else if(arr[i-1] <= j){
                t[i][j] = t[i-1][j - arr[i-1]] || t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    int ans = INT_MAX;
    for(int i=0;i<x+1;i++){
        if(t[n][i]){
            ans = min(ans , x - (2*i ) );
        }
    }
    return ans;
}




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    input(n);
    int arr[n];
    FOR(0,n){
        cin>>arr[i];
    }
    input(x);
    cout<<countSubsets(n,arr,x);
    return 0;
}