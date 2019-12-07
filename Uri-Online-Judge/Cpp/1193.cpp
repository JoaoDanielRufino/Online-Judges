#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

string convertToBinary(int num) {
    int tmp;
    string aux;

    while(num > 0) {
        tmp = num % 2;
        aux += to_string(tmp);
        num /= 2;
    }

    reverse(aux.begin(), aux.end());

    return aux;
}

int main() {

    int n, decimal, k = 1;
    string num, type, bin, he;

    cin >> n;

    while(n--) {
        cin >> num >> type;

        cout << "Case " << k++ << ":" << endl;

        if(type == "bin") {
            decimal = stoi(num, nullptr, 2);

            cout << decimal << " dec" << endl;
            printf("%x hex\n", decimal);
        }
        else if(type == "hex") {
            decimal = stoi(num, nullptr, 16);
            bin = convertToBinary(decimal);

            cout << decimal << " dec" << endl;
            cout << bin << " bin" << endl;
        }
        else if(type == "dec") {
            stringstream ss(num);
            ss >> decimal;
            bin = convertToBinary(decimal);

            printf("%x hex\n", decimal);
            cout << bin << " bin" << endl;
        }

        cout << endl;
    }

    return 0;
}