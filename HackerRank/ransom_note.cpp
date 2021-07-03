void checkMagazine(vector<string> magazine, vector<string> note) {
    unordered_map<string, int> magazineMap;
    
    for(string str : magazine) {
        magazineMap[str]++;
    }
    
    for(string str : note) {
        if(!magazineMap[str]) {
            cout << "No";
            return;            
        }
        magazineMap[str]--;
    }
    
    cout << "Yes";
}
