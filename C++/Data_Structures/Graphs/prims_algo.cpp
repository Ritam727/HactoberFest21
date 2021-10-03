#include <bits/stdc++.h>

using namespace std;

class Graph{
  vector<pair<int,int>> *l;
  int V;
  public:
    Graph(int n){
      V = n;
      l = new vector<pair<int,int>>[n];
    }
    void addEdge(int x, int y, int w){
      l[x].push_back({y,w});
      l[y].push_back({x,w});
    }
    int prim_mst(){
      //initialized a min heap
      priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> Q;

      //another array
      // visited array that denotes whether a node has been included in MST or not
      bool *visited = new bool[V]{false};
      int ans = 0;
      Q.push({0,0}); // weight, node
      while(!Q.empty()){
        //pick out the edge with the minimum weight
        auto best = Q.top();
        Q.pop();
        int to = best.second;
        int weight = best.first;
        if(visited[to]){
          continue;
        }
        //otherwise
        ans+=weight;
        visited[to] = true;
        for(auto p:l[to]){
          if(!visited[p.first]){
            Q.push({p.second, p.first});
          }
        }
      }
      return ans;
    }
};

int main(){
  int n, m;
  cin >> n >> m;
  Graph g(n);
  for(int i=0;i<m;i++){
    int x, y, w;
    cin >> x >> y >> w;
    g.addEdge(x-1,y-1,w);
  }
  cout << g.prim_mst() << endl;
  return 0;
}