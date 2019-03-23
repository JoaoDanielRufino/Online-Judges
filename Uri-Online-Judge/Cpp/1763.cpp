#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    string s;

    while(cin >> s){
        if(s == "brasil" || s == "portugal")
            cout << "Feliz Natal!" << endl;
    	else if(s == "alemanha")
            cout << "Frohliche Weihnachten!" << endl;
    	else if(s == "austria")
            cout << "Frohe Weihnacht!" << endl;
    	else if(s == "coreia")
            cout << "Chuk Sung Tan!" << endl;
    	else if(s == "espanha" || s == "argentina" || s == "chile" || s == "mexico")
            cout << "Feliz Navidad!" << endl;
    	else if(s == "grecia")
            cout << "Kala Christougena!" << endl;
    	else if(s == "estados-unidos" || s == "inglaterra" || s == "australia" || s == "antardida" || s == "canada")
            cout << "Merry Christmas!" << endl;
    	else if(s == "suecia")
            cout << "God Jul!" << endl;
    	else if(s == "turquia")
            cout << "Mutlu Noeller" << endl;
    	else if(s == "irlanda")
            cout << "Nollaig Shona Dhuit!" << endl;
    	else if(s == "belgica")
            cout << "Zalig Kerstfeest!" << endl;
    	else if(s == "italia" || s == "libia")
            cout << "Buon Natale!" << endl;
    	else if(s == "siria" || s == "marrocos")
            cout << "Milad Mubarak!" << endl;
    	else if(s == "japao")
            cout << "Merii Kurisumasu!" << endl;
    	else
            cout << "--- NOT FOUND ---" << endl;
    }

    return 0;
}
