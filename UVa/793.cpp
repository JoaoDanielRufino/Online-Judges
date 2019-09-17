#include <iostream>

using namespace std;

class QuickUnion {
  private:
    int size;
    int *vet;

  int root(int i) {
      if(i == vet[i])
        return i;
      
      return root(vet[i]);
    }

  public:
    QuickUnion(int size) {
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

int main() {

  //ios::sync_with_stdio(false); cin.tie(0);
  int n, t, p, q, succ, unsucc;
  bool flag = false;
  char c;
  string str;

  cin >> t;
  while(t--) {
    scanf("\n%d\n", &n);
    QuickUnion qu(n);

    succ = unsucc = 0;
    while(1) {
      if(!getline(cin,str) || str.empty())
        break;

      sscanf(str.c_str(), "%c %d %d", &c, &p, &q);

      if(c == 'c')
        qu.myUnion(p-1, q-1);
      else if(c == 'q') {
        if(qu.connected(p-1, q-1))
          succ++;
        else
          unsucc++;
      }
    }

    if(flag)
      cout << endl;
    cout << succ << "," << unsucc << endl;

    flag = true;
  }

  return 0;
}