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

int lcs(int x, int y, string s1, string s2)
    {
        int t[x+1][y+1];
        
        for(int i=0;i<x+1;i++){
            for(int j = 0;j<y+1;j++){
                if(i==0 || j==0) t[i][j] = 0;
                
                else if(s1[i-1] == s2[j-1]){
                    t[i][j] = 1 + t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[x][y];
    }

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    

    return 0;
}