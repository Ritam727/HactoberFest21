#include <bits/stdc++.h>

using namespace std;

void dfs(vector<int> graph[], int node, bool *visited, vector<int> &stack)
{
  visited[node] = true;
  for (auto nbr : graph[node])
  {
    if (!visited[nbr])
    {
      dfs(graph, nbr, visited, stack);
    }
  }
  stack.push_back(node);
  return;
}
void dfs2(vector<int> graph[], int node, bool *visited)
{
  visited[node] = true;
  cout << node << " ";
  for (auto nbr : graph[node])
  {
    if (!visited[nbr])
    {
      dfs2(graph, nbr, visited);
    }
  }
  return;
}

void solve(vector<int> graph[], vector<int> rev_graph[], int N)
{
  bool visited[N];
  memset(visited, 0, N);
  vector<int> stack;
  //step - 1 store the vertices in the vector acc to dfs finish time
  for (int i = 0; i < N; i++)
  {
    if (!visited[i])
    {
      dfs(graph, i, visited, stack);
    }
  }
  //step - 2 reverse the graph already done while taking input
  //step - 3 dfs acc to the ordering in the stack
  memset(visited, 0, N);
  char component_name = 'A';
  for (int i = stack.size() - 1; i >= 0; i--)
  {
    int node = stack[i];
    if (!visited[node])
    {
      cout << "Component " << component_name << "-->";
      //there is component starting from this node
      dfs2(rev_graph, node, visited);
      cout << "\n";
      component_name++;
    }
  }
}

int main()
{
  int N;
  cin >> N;
  vector<int> graph[N];
  vector<int> rev_graph[N];
  int m;
  cin >> m;
  while (m--)
  {
    int x, y;
    cin >> x >> y;
    graph[x].push_back(y);
    rev_graph[y].push_back(x);
  }
  solve(graph, rev_graph, N);
  return 0;
}