#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Graph {
  private:
    int vertices;
    vector< pair<int, pair<int, int> > > edges; // Edge representation

  public:
    Graph(int v) {
      vertices = v;
    }

    void addEdge(int v, int u, int w) {
      edges.push_back(make_pair(w, make_pair(v, u)));
    }

    int getV() {
      return vertices;
    }

    vector< pair<int, pair<int, int> > > getEdges() {
      return edges;
    }
};

class UnionFind {
  private:
    int *vet;
    int size;

    int root(int i) {
      if(i == vet[i])
        return i;
      
      return root(vet[i]);
    }

  public:
    UnionFind(int size) {
      this->size = size;
      vet = new int[size];
      for(int i = 0; i < size; i++)
        vet[i] = i;
    }

    bool connected(int p, int q) {
      return root(p) == root(q);
    }

    void myUnion(int p, int q) {
      int i = root(p);
      int j = root(q);
      vet[i] = j;
    }
};

class KruskalMST {
  private:
    int weight;
    vector< pair<int, pair<int, int> > > mst;

  public:
    KruskalMST(Graph g, vector< pair<int, pair<int, int> > > edges) {
      UnionFind uf(g.getV());
      weight = 0;
      for(int i = 0; i < edges.size(); i++) {
        int a = edges[i].second.first;
        int b = edges[i].second.second;
        int w = edges[i].first;

        if(!uf.connected(a, b)) { // If connected, this edge will create a cycle, so we check if not connected
          mst.push_back(make_pair(w, make_pair(a, b)));
          weight += w;
          uf.myUnion(a, b);
        }

        if(mst.size() >= g.getV()-1) // A MST has V-1 edges
          break;
      }
    }

    int getWeight() {
      return weight;
    }
};

int main() {

  ios::sync_with_stdio(false); cin.tie(0);
  int m, n, a, b, w;

  while(cin >> m >> n && (m && n)) {
    Graph g(m);
    while(n--) {
      cin >> a >> b >> w;
      g.addEdge(a-1, b-1, w);
    }

    vector< pair<int, pair<int, int> > > edges = g.getEdges();
    
    sort(edges.begin(), edges.end());
    KruskalMST mst(g, edges);
    int minCost = mst.getWeight();

    reverse(edges.begin(), edges.end());
    KruskalMST mst2(g, edges);
    int maxCost = mst2.getWeight();

    cout << maxCost - minCost << endl;
  }

  return 0;
}