#include <bits/stdc++.h>

using namespace std;

bool dfs_helper(vector<int> graph[], int node, int *visited, int parent, int color)
{
  //come to a node
  visited[node] = color; // 1 or 2, both mean visited
  for (auto nbr : graph[node])
  {
    if (visited[nbr] == 0)
    {
      int subprob = dfs_helper(graph, nbr, visited, node, 3 - color);
      if (subprob == false)
        return false;
    }
    else if (nbr != parent && color == visited[nbr])
    {
      return false;
    }
  }
  return true;
}

bool dfs(vector<int> graph[], int n)
{
  int visited[n] = {0}; // 0 - not visited, 1 - visited with color 1, 2 - visited with color 2
  int ans = dfs_helper(graph, 0, visited, -1, 1);
  for (int i = 0; i < n; i++)
  {
    cout << i << " - Color " << visited[i] << endl;
  }
  return ans;
}

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> graph[n];
  while (m--)
  {
    int x, y;
    cin >> x >> y;
    graph[x].push_back(y);
    graph[y].push_back(x);
  }
  //BFS OR DFS, by coloring the nodes at each step(current node has color 1, nbr should have color 2)
  if (dfs(graph, n))
  {
    cout << "The graph is a bipartite graph" << endl;
  }
  else
  {
    cout << "The given graph is not bipartite." << endl;
  }
  return 0;
}
