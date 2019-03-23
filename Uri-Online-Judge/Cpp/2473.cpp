#include <bits/stdc++.h>

using namespace std;

int main(){

   ios::sync_with_stdio(false); cin.tie(0);
   int n,count;
   vector<int> v1;

   for(int i = 0; i < 6; i++){
      cin >> n;
      v1.push_back(n);
   }

   count = 0;
   for(int i = 0; i < 6; i++){
      cin >> n;
      for(int j = 0; j < 6; j++){
         if(v1[j] == n)
            count++;
      }
   }

   if(count == 3)
      cout << "terno" << endl;
   else if(count == 4)
      cout << "quadra" << endl;
   else if(count == 5)
      cout << "quina" << endl;
   else if(count  == 6)
      cout << "sena" << endl;
   else
      cout << "azar" << endl;

   return 0;
}
