#include <bits/stdc++.h>

using namespace std;

class Graph{
  int V;
  list<int> *l;
  public:
    Graph(int V){
      this->V = V;
      l = new list<int>[V];
    }
    void addEdge(int x, int y, bool directed=true){
      l[x].push_back(y);
      if(!directed){
        l[y].push_back(x);
      }
    }

    bool cycle_helper(int node, bool *visited, bool *current){
      //visit a node
      visited[node] = true;
      current[node] = true;

      for(int nbr : l[node]){
        if(current[nbr]){
          return true;
        }else if(!visited[nbr] && cycle_helper(nbr, visited, current)){
          return true;
        }
      }

      //leave a node
      current[node] = false;
      return false;
    }

    bool contains_cycle(){
      //check for cycle in directed graph
      bool *visited = new bool[V];
      bool *current = new bool[V];
      for(int i=0;i<V;i++){
        visited[i]=current[i]=false;
      }
      return cycle_helper(0, visited, current);
    }

    bool cycle_helper_undirected(int node, bool *visited, int parent){
      visited[node] = true;
      for(auto nbr: l[node]){
        //two cases
        if(!visited[nbr]){
          // go and recursively visit the nbr
          bool cycle_mila = cycle_helper_undirected(nbr, visited, node);
          if(cycle_mila) return true;
        }else if(nbr!=parent){
          return true;
        }
      }
      return false;
    }

    bool contains_cycle_undirected(){
      bool *visited = new bool[V];
      for(int i=0;i<V;i++) visited[i]=false;
      return cycle_helper_undirected(0,visited,-1);
    }
};

int main(){
  Graph g(5);
  g.addEdge(0,1,false);
  g.addEdge(1,2,false);
  g.addEdge(2,3,false);
  g.addEdge(3,4,false);
  //g.addEdge(4,0,false);
  cout << (g.contains_cycle_undirected() ? "Yes, it contains cycle" : "No, it doesn't contain a cycle")<< endl;
  return 0;
}