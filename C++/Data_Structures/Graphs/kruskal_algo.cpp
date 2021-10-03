#include <bits/stdc++.h>

using namespace std;

//DSU Data Structure
//Path Compression + Union By Rank Optimization

class DSU{
  int *parent;
  int *rank;
  public:
    DSU(int n){
      parent = new int[n];
      rank = new int[n];
      //initializing both arrays
      for(int i=0;i<n;i++){
        parent[i] = -1;
        rank[i] = 1;
      }
    }

    //find function
    int find(int i){
      if(parent[i]==-1){
        return i;
      }
      return parent[i] = find(parent[i]);
    }

    //union function
    void unite(int x, int y){
      int s1 = find(x);
      int s2 = find(y);
      if(s1!=s2){
        if(rank[s1] < rank[s2]){
          parent[s1] = s2;
          rank[s2] += rank[s1];
        }else{
          parent[s2] = s1;
          rank[s1] += rank[s2];
        }
      }
    }
};

class Graph{
  vector<vector<int>> edgeList;
  int V;
  public:
    Graph(int V){
      this->V = V;
    }
    void addEdge(int x, int y, int weight){
      edgeList.push_back({weight,x,y}); // this will automatically sort based on the first parameter so we won't
      // need to write a separate compare function
    }
    int kruksal_mst(){
      //Main Logic
      // 1. Sort all edges based upon weight
      sort(edgeList.begin(), edgeList.end());

      //Initialize a DSU object
      DSU s(V);
      int ans = 0;
      for(auto edge : edgeList){
        if(s.find(edge[1])!=s.find(edge[2])){
          s.unite(edge[1], edge[2]);
          ans+=edge[0];
        }
      }
      return ans;
    }
};

int main(){
  Graph g(5);
  g.addEdge(0,1,1);
  g.addEdge(0,2,2);
  g.addEdge(0,3,2);
  g.addEdge(1,2,2);
  g.addEdge(1,3,3);
  g.addEdge(2,3,3);
  g.addEdge(3,4,6);
  cout << g.kruksal_mst() << endl;
}