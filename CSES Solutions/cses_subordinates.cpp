//Author: rajmadhu0406 (raj.madhu0406@gmail.com)

#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define ull unsigned long long int	
#define mod 1000000007
 
// sort(arr, arr + n);
 
int func(vector<int> adj[], vector<int> &v, int n)
{
	for(int k = 0; k < adj[n].size(); k++)
	{
		v[n]++;
		v[n] += func(adj, v, adj[n][k]);
	}
	
	return v[n];
}
 
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	
	vector<int> adj[n+1];
	
	for(int i = 2; i <= n; i++)
	{
		int x;
		cin>>x;
		
		adj[x].push_back(i);
	}	
	
	vector<int> v;
	v.resize(n+1,0);
	
	int xx = func(adj, v, 1);
	
	for(int i = 1; i <= n; i++)
	{
		cout<<v[i]<<" ";
	}
	
	return 0;
}
