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

class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        int t[n+1][n+1];
        for(int i=0; i<n+1; i++){
            for(int j=0; j<n+1; j++){
                if(i==0 || j==0) t[i][j] = 0;
                
                else if(i <= j){
                    t[i][j] = max(price[i-1] + t[i][j-i] , t[i-1][j]);
                }
                else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
        return t[n][n];
    }
};

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    

    return 0;
}