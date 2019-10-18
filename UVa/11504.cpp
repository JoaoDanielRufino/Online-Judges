#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector< vector<int> > graph(100005);
vector<bool> seen(100005, false);

void fillStack(int u, stack<int> &st) {
  seen[u] = true;

  for(int i = 0; i < graph[u].size(); i++) {
    int v = graph[u][i];
    if(!seen[v])
     fillStack(v, st);
  }

  st.push(u);
}

void dfs(int u) {
  seen[u] = true;

  for(int i = 0; i < graph[u].size(); i++) {
    int v = graph[u][i];
    if(!seen[v])
      dfs(v);
  }
}

int countComponents(int n) {
  int count = 0;

  stack<int> st;
  for(int i = 0; i < n; i++) {
    if(!seen[i])
      fillStack(i, st);
  }

  for(int i = 0; i < n; i++)
    seen[i] = false;

  while(!st.empty()) {
    int u = st.top();
    st.pop();

    if(!seen[u]) {
      dfs(u);
      count++;
    }
  }

  return count;
}

int main() {

  int t, n, m, a, b;

  cin >> t;
  while(t--) {
    cin >> n >> m;

    for(int i = 0; i < n; i++)
      graph[i].clear();

    while(m--) {
      cin >> a >> b;
      graph[a-1].push_back(b-1);
    }

    for(int i = 0; i < n; i++)
      seen[i] = false;

    cout << countComponents(n) << endl;
  }

  return 0;
}