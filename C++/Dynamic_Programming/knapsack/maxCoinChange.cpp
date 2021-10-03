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

long long int count( int coin[], int m, int n )
    {
        long long int t[n+1][m+1];
        for(int i=0;i<n+1;i++){ ///// i is for value of sum remaining
            for(int j=0;j<m+1;j++){///// j is for size of array in consideration
                if(i==0) t[i][j]=1;
                else if(j==0) t[i][j] = 0;
                
                else if(coin[j-1] <= i){
                    t[i][j] = t[i-coin[j-1]][j] + t[i][j-1];
                }
                else{
                    t[i][j] = t[i][j-1];
                }
            }
        }
        return t[n][m];
    }

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    

    return 0;
}