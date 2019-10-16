#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

class Graph {
  private:
    int vertices;
    vector< pair<double, pair<int, int> > > edges; // Edge representation

  public:
    Graph(int v) {
      vertices = v;
    }

    void addEdge(int v, int u, double w) {
      edges.push_back(make_pair(w, make_pair(v, u)));
    }

    int getV() {
      return vertices;
    }

    vector< pair<double, pair<int, int> > > getEdges() {
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
    double weight;
    vector< pair<double, pair<int, int> > > mst;

  public:
    KruskalMST(Graph g) {
      vector< pair<double, pair<int, int> > > edges = g.getEdges();
      sort(edges.begin(), edges.end());

      UnionFind uf(g.getV());
      weight = 0;
      for(int i = 0; i < edges.size(); i++) {
        int a = edges[i].second.first;
        int b = edges[i].second.second;
        double w = edges[i].first;

        if(!uf.connected(a, b)) { // If connected, this edge will create a cycle, so we check if not connected
          mst.push_back(make_pair(w, make_pair(a, b)));
          weight += w;
          uf.myUnion(a, b);
        }

        if(mst.size() >= g.getV()-1) // A MST has V-1 edges
          break;
      }
    }

    double getWeight() {
      return weight;
    }
};

int main() {

  ios::sync_with_stdio(false); cin.tie(0);

  int t, a, b, n;
  double w;
  vector< pair<int,int> > vet;

  cin >> t;
  while(t--) {
    cin >> n;
    Graph g(n);
    while(n--) {
      cin >> a >> b;
      vet.push_back(make_pair(a, b));
    }

    for(int i = 0; i < vet.size(); i++) {
      for(int j = 0; j < vet.size(); j++) {
        w = (double) sqrt(pow(vet[j].first - vet[i].first, 2) + pow(vet[j].second - vet[i].second, 2));
        g.addEdge(i, j, w / 100.0);
      }
    }

    KruskalMST mst(g);

    cout << fixed << setprecision(2) << mst.getWeight() << endl;

    vet.clear();
  }

  return 0;
}