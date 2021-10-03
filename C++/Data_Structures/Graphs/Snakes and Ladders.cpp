#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int solve(vector<vector<int>> &A, vector<vector<int>> &B){
  vector<int> board(101);
  map<int,vector<int>> l;
  for(auto p: A){
    board[p[0]] = p[1]-p[0];
  }
  for(auto p: B){
    board[p[0]] = p[1]-p[0];
  }
  for(int i=0;i<=100;i++){
    for(int dice=1;dice<=6;dice++){
      int j = i+dice;
      j+=board[j];
      if(j<=100){
        l[i].push_back(j);
      }
    }
  }
  l[100].push_back(100);
  map<int,int> dist;
  queue<int> q;
  for(auto p: l){
    int node = p.first;
    dist[node] = INT_MAX;
  }
  q.push(1);
  dist[1] = 0;
  while(!q.empty()){
    int node = q.front();
    q.pop();
    for(int nbr: l[node]){
      if(dist[nbr]==INT_MAX){
        q.push(nbr);
        dist[nbr] = dist[node] + 1;
      }
    }
  }
  if(dist[100]==INT_MAX){
    return -1;
  }
  return dist[100];
}

int main () {
  vector<vector<int>> A{{3,90}};
  vector<vector<int>> B{{99,10},{97,20},{98,30},{96,40},{95,50},{94,60},{93,70}};
  int ans = solve(A, B);
  cout << ans << endl;
	return 0;
}