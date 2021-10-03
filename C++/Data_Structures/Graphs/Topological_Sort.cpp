#include <iostream>
#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Graph
{
  map<T, list<T>> l;

public:
  void addEdge(T x, T y)
  {
    l[x].push_back(y);
    //l[y].push_back(x);
  }
  void dfs_helper(T src, map<T, bool> &visited, vector<T> &ordering)
  {
    //recursive function which will traverse the graph
    visited[src] = true;
    // cout << src << " ";
    for (T nbr : l[src])
    {
      if (!visited[nbr])
      {
        dfs_helper(nbr, visited, ordering);
      }
    }
    ordering.push_back(src);
    return;
  }

  void topological_sorting_dfs()
  {
    map<T, bool> visited;
    vector<T> ordering;
    for (auto p : l)
    {
      visited[p.first] = false;
    }

    for (auto p : l)
    {
      T node = p.first;
      if (!visited[node])
      {
        dfs_helper(node, visited, ordering);
      }
    }
    //finally print the list
    reverse(ordering.begin(), ordering.end());
    for (auto node : ordering)
    {
      cout << node << endl;
    }
  }
};

class Graph_BFS
{
  vector<int> *l;
  int V;

public:
  Graph_BFS(int V)
  {
    this->V = V;
    l = new vector<int>[V];
  }
  void addEdge(int x, int y)
  {
    //directed graph
    l[x].push_back(y);
  }
  void topological_sort()
  {
    vector<int> indegree(V, 0);
    //update indegree by traversing edges x->y indegree[y]++
    for (int i = 0; i < V; i++)
    {
      for (int nbr : l[i])
      {
        indegree[nbr]++;
      }
    }
    //bfs
    //1. find nodes with 0 indegree
    queue<int> q;
    for (int i = 0; i < V; i++)
    {
      if (indegree[i] == 0)
      {
        q.push(i);
      }
    }
    while (!q.empty())
    {
      int node = q.front();
      q.pop();
      cout << node << " ";
      for (int nbr : l[node])
      {
        indegree[nbr]--;
        if (indegree[nbr] == 0)
        {
          q.push(nbr);
        }
      }
    }
    cout << endl;
  }
};

int main()
{
  Graph<int> g;
  g.addEdge(0, 2);
  g.addEdge(1, 4);
  g.addEdge(4, 5);
  g.addEdge(1, 2);
  g.addEdge(2, 3);
  g.addEdge(2, 5);
  g.addEdge(3, 5);
  g.topological_sorting_dfs();
  return 0;
}