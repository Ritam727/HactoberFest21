#include<bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define fori(s,n) for(int i=s;i<n;i++)
#define forj(s,n) for(int j=s;j<n;j++)
#define fork(s,n) for(int k=s;k<n;k++)
#define ll long long
#define umii unordered_map<int,int>
#define umci unordered_map<char,int>
#define usi unordered_set<int>
#define usc unordered_set<char>

using namespace std;
int mx(int a,int b,int c){
    return max(a,max(b,c));
}
int mn(int a, int b,int c){
    return min(a,min(b,c));
}

int ropeParts(int n, int a,int b,int c){
    if(n==0){
        return 0;
    }
    else if(n<0){
        return -1;
    }
    
    int x = mx(ropeParts(n-a,a,b,c),ropeParts(n-b,a,b,c),ropeParts(n-c,a,b,c));
    if(x==-1){
        return -1;
    }
    return x+1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<ropeParts(n,a,b,c);

    cout<<endl;
    return 0;
}