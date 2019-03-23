#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int r,countm,countl,mark,leti,pos,a;
    vector<int> vm, vl;

    while(cin >> r, r){
        mark = leti = 0;
        for(int i = 0; i < r; i++){
            cin >> a;
            vm.push_back(a);
            mark += a;
        }
        for(int i = 0; i < r; i++){
            cin  >> a;
            vl.push_back(a);
            leti += a;
        }

        int auxm = vm[0];
        int auxl = vl[0];
        countm = countl = 1;
        for(int i = 1; i < r; i++){
            if(auxm == vm[i])
                countm++;
            else{
                auxm = vm[i];
                countm = 1;
            }
            if(auxl == vl[i])
                countl++;
            else{
                auxl = vl[i];
                countl = 1;
            }
            if(countm == 3 || countl == 3){
                if(countm > countl)
                    mark += 30;
                else if(countm < countl)
                    leti += 30;
                break;
            }
        }

        if(leti == mark)
            cout << "T" << endl;
        else if(mark > leti)
            cout << "M" << endl;
        else
            cout << "L" << endl;
        vm.clear();
        vl.clear();
    }

    return 0;
}
