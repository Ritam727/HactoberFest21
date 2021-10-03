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

int minCoins(int coins[], int n, int s) 
	{ 
	    long long int t[n+1][s+1];
	    for(long long int i=0;i<n+1;i++){  ///// i is for size of array
	        for(long long int j=0;j<s+1;j++){  ///////j is for the amount of money left
	            if(i==0) t[i][j] = INT_MAX - 1;
	            else if(j==0) t[i][j] = 0;
	            
	            else if(coins[i-1] <= j){
	                t[i][j] = min(1+t[i][j-coins[i-1]], t[i-1][j]);
	            }
	            else{
	                t[i][j] = t[i-1][j];
	            }
	        }
	    }
	    if(t[n][s] > INT_MAX-10) return -1;
	    else return t[n][s];
	}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    

    return 0;
}