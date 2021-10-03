#include <iostream>
#include <bits/stdc++.h>

using namespace std;

template<typename T>
class Graph{
  map<T,list<T>> l;
  public:
    void addEdge(T x, T y){
      l[x].push_back(y);
      l[y].push_back(x);
    }
    void dfs_helper(T src, map<T,bool> &visited){
      //recursive function which will traverse the graph
      visited[src] = true;
      cout << src << " ";
      for(auto nbr : l[src]){
        if(!visited[nbr]){
          dfs_helper(nbr, visited);
        }
      }
    }

    void dfs(T src){
      map<T,bool> visited;
      //mark all the nodes as not visited in the beginning
      for(auto p : l){
        visited[p.first]=false;
      }
      dfs_helper(src, visited);
      cout << "\n";
    }

    void connected_components(){
      map<T,bool> visited;
      //mark all the nodes as not visited in the beginning
      for(auto p : l){
        visited[p.first]=false;
      }
      int cnt = 1;
      for(auto p: l){
        if(!visited[p.first]){
          cout << "Component " << cnt << "->";
          dfs_helper(p.first, visited);
          cout << "\n";
          cnt++;
        }
      }
    }
};

int main(){
  Graph<int> g;
  g.addEdge(0,1);
  g.addEdge(1,2);
  g.addEdge(2,3);
  g.addEdge(0,3);
  g.addEdge(0,4);

  g.addEdge(5,6);
  g.addEdge(6,7);

  g.addEdge(8,8);
  g.connected_components();

  return 0;
}