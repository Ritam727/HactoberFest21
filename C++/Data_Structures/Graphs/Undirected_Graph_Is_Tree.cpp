#include <bits/stdc++.h>

using namespace std;

//check if a undirected graph is a tree or not
//so it boils down to checking if an undirected graph is cyclic or not
//to check that we can do a graph traversal and see if we can visit a node through
//more than one path or not. If yes, then it is not a tree else it is a tree
/*
So we simply do a bfs and check if we have come to node which is already visited 
and we have to take care of parents because in an undirectional graph the child node has the parent
node as one of its visited neighbour so if we don't consider parents and we may return the wrong answer 
*/

class Graph{
  list<int> *l;
  int V;
  public:
    Graph(int V){
      this->V = V;
      l = new list<int>[V];
    }
    void addEdge(int x, int y){
      l[x].push_back(y);
      l[y].push_back(x);
    }
    bool isTree(){
      bool *visited = new bool[V];
      int *parent = new int[V];

      queue<int> q;

      for(int i=0;i<V;i++){
        visited[i]=false;
        parent[i] = i;
      }
      int src = 0;
      q.push(src);
      visited[src] = true;
      while(!q.empty()){
        int node = q.front();
        q.pop();
        for(int nbr : l[node]){
          if(visited[nbr] && parent[node]!=nbr){
            return false;
          }else if(!visited[nbr]){
            visited[nbr] = true;
            q.push(nbr);
            parent[nbr] = node;
          }
        }
      }
      return true;

    }
};

int main(){
  Graph g(4);
  g.addEdge(0,1);
  g.addEdge(3,2);
  g.addEdge(1,2);
  g.addEdge(0,3);
  cout << g.isTree() << endl;
}