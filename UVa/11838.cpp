#include <iostream>
#include <vector>

using namespace std;

void dfs(vector< vector<int> > graph, int v, vector<bool> &seen) {
  seen[v] = true;

  for(int i = 0; i < graph[v].size(); i++) {
    int u = graph[v][i];
    if(!seen[u])
      dfs(graph, u, seen);
  }
}

bool checkStronglyConnected(vector< vector<int> > graph) {
  vector<bool> seen(graph.size(), false);

  dfs(graph, 0, seen);

  for(int i = 0; i < seen.size(); i++) {
    if(!seen[i])
      return false;
  }

  vector< vector<int> > transposed(graph.size(), vector<int>());
  for(int i = 0; i < graph.size(); i++) {
    for(int j = 0; j < graph[i].size(); j++) {
      int u = graph[i][j];
      transposed[u].push_back(i);
    }
    seen[i] = false;
  }

  dfs(transposed, 0, seen);

  for(int i = 0; i < seen.size(); i++) {
    if(!seen[i])
      return false;
  }

  return true;
}

int main() {

  int n, m, a, b, p;

  while(cin >> n >> m && (n && m)) {
    vector< vector<int> > graph(n, vector<int>());
    while(m--) {
      cin >> a >> b >> p;
      if(p == 1)
        graph[a-1].push_back(b-1);
      else if(p == 2) {
        graph[a-1].push_back(b-1);
        graph[b-1].push_back(a-1);
      }
    }

    cout << checkStronglyConnected(graph) << endl;
  }

  return 0;
}