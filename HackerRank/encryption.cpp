string encryption(string s) {
    string aux, res;
    
    for(char c : s) {
        if(c != ' ')
            aux += c;
    }
    
    int r = floor(sqrt(aux.size()));
    int c = ceil(sqrt(aux.size()));
    
    while(r * c < aux.size())
        r++;
    
    vector<string> vet;
    string curr;
    int tmp = c;
    for(char a : aux) {
        curr += a;
        tmp--;
        if(!tmp) {
            vet.push_back(curr);
            tmp = c;
            curr.clear();
        }
    }
    
    if(curr.size())
        vet.push_back(curr);

    int index = 0;
    while(c--) {
        for(string a : vet) {
            if(index < a.size())
                res += a[index];
        }
        res += ' ';
        index++;
    }
    
    return res;
}
