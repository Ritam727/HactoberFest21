#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class GraphInt{
  int V;
  list<int> *l;

  public:
    GraphInt(int V){
      this->V = V;
      l = new list<int>[V];
    }
    void addEdge(int x, int y){
      l[x].push_back(y);
      l[y].push_back(x);
    }
    void printAdjList(){
      for(int i=0;i<V;i++){
        cout << "Vertex " << i << "->";
        for(int x : l[i]){
          cout << x << ",";
        }
        cout << "\n";
      }
    }

};

class GraphGeneric{
  //weighted graph with node values as string so we will make use of map to make a adjacency list
  //map<string,list<pair<string,int>> will be data structure which we will use. In the pair we will have first value as neighbour and second value
  // as weight of that edge
  map<string, list<pair<string,int>>> l;
  public:
    void addEdge(string x, string y, bool bi, int weight){
      if(bi){
        l[x].push_back({y,weight});
        l[y].push_back({x,weight});
      }else{
        l[x].push_back({y,weight});
      }
    }
    void printAdjList(){
      //iterate over all the keys in the map
      //when we iterate over a map we get key and value as a pair
      for(auto p: l){
        string city = p.first;
        list<pair<string,int>> nbrs=  p.second;
        cout << city << "->";
        for(auto nbr : nbrs){
          cout << nbr.first << " " << nbr.second << ", ";
        }
        cout << "\n";
      }
    }
};

int main(){
  return 0;
}