#include <bits/stdc++.h>

using namespace std;

vector<int> bellman_ford(int V, int src, vector<vector<int>> edges){
  //create vector
  vector<int> dist(V+1, INT_MAX);
  dist[src] = 0;
  for(int i=0;i<V-1;i++){
    for(auto edge:edges){
      if(dist[edge[0]]!=INT_MAX && dist[edge[1]] > dist[edge[0]] + edge[2]){
        dist[edge[1]] = dist[edge[0]] + edge[2];
      }
    }
  }
  for(auto edge:edges){
    if(dist[edge[0]]!=INT_MAX && dist[edge[1]] > dist[edge[0]] + edge[2]){
      cout << "This graph contains a negative weight cycle" << endl;
      exit(0);
    }
  }
  return dist;
}

int main(){
  int n, m;
  cin >> n >> m;
  //edge list
  vector<vector<int>> edges;
  for(int i=0;i<m;i++){
    int x, y, w;
    cin >> x >> y >> w;
    edges.push_back({x,y,w});
  }
  vector<int> dist = bellman_ford(n, 1, edges);
  for(int i=1;i<=n;i++){
    cout << "Node " << i << " is at distance " << dist[i] << " from node 1 " << endl;
  }
  cout << "\n";
  return 0;
}
