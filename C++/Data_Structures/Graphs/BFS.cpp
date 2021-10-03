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
    l[y].push_back(x);
  }
  void bfs(T src)
  {
    map<T, int> visited;
    queue<T> q;

    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
      T node = q.front();
      q.pop();
      cout << node << " ";
      for (int nbr : l[node])
      {
        if (!visited[nbr])
        {
          q.push(nbr);
          visited[nbr] = true;
        }
      }
    }
    cout << "\n";
  }
  void shortest_path_from_source(T src)
  {
    map<T, int> dist;
    queue<T> q;
    for (auto p : l)
    {
      T node = p.first;
      dist[node] = INT_MAX; // pehle saare nodes ka distance max value rakh diya from source
    }
    q.push(src);
    dist[src] = 0; // source ka distance zero kar diya
    while (!q.empty())
    {
      T node = q.front();
      q.pop();
      for (int nbr : l[node])
      {
        if (dist[nbr] == INT_MAX)
        {
          q.push(nbr);
          dist[nbr] = dist[node] + 1; // ab har node ka minimum distance will be 1 + min distance of its previously visited neighbour from source
        }
      }
    }

    for (auto node_pair : l)
    {
      cout << "Node " << node_pair.first << " distance from the source is " << dist[node_pair.first] << "\n";
    }
  }
};

int main()
{
  Graph<int> g;
  g.addEdge(0, 1);
  g.addEdge(0, 3);
  g.addEdge(1, 2);
  g.addEdge(2, 3);
  g.addEdge(3, 4);
  g.addEdge(4, 5);
  g.bfs(0);
  g.shortest_path_from_source(0);

  return 0;
}