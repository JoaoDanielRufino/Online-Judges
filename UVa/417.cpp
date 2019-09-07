#include <iostream>
#include <unordered_map>

using namespace std;

int main() {

  ios::sync_with_stdio(false); cin.tie(0);
  int count = 1;
  string aux;
  unordered_map<string,int> map;

  for(char c = 'a'; c <= 'z'; c++) {
    aux = c;
    map[aux] = count++;
  }

  for(char c = 'a'; c <= 'y'; c++) {
    for(char b = c+1; b <= 'z'; b++) {
      aux = string(1, c) + string(1, b);
      map[aux] = count++;
    }
  }

  for(char c = 'a'; c <= 'x'; c++) {
    for(char b = c+1; b <= 'y'; b++) {
      for(char d = b+1; d <= 'z'; d++) {
        aux = string(1, c) + string(1, b) + string(1, d);
        map[aux] = count++;
      }
    }
  }

  for(char c = 'a'; c <= 'w'; c++) {
    for(char b = c+1; b <= 'x'; b++) {
      for(char d = b+1; d <= 'y'; d++) {
        for(char e = d+1; e <= 'z'; e++) {
          aux = string(1, c) + string(1, b) + string(1, d) + string(1, e);
          map[aux] = count++;
        }
      }
    }
  }

  for(char c = 'a'; c <= 'v'; c++) {
    for(char b = c+1; b <= 'w'; b++) {
      for(char d = b+1; d <= 'x'; d++) {
        for(char e = d+1; e <= 'y'; e++) {
          for(char f = e+1; f <= 'z'; f++) {
            aux = string(1, c) + string(1, b) + string(1, d) + string(1, e) + string(1, f);
            map[aux] = count++;
          }
        }
      }
    }
  }  

  while(cin >> aux) {
    cout << map[aux] << endl;
  }

  return 0;
}