string solution(string path) {
    vector<string> myStack;
    
    for(int i = 0; i < path.size(); i++) {
        if(path[i] == '/')
            continue;
            
        string tmp;
        while(i < path.size() && path[i] != '/')
            tmp += path[i++];
        
        if(tmp == ".")
            continue;
            
        if(tmp == "..") {
            if(!myStack.empty())
                myStack.pop_back();
        }
        else
            myStack.push_back(tmp);
    }
    
    if(myStack.empty())
        return "/";
    
    string ans;
    for(string s : myStack) {
        ans += "/" + s;
    }
    
    return ans;
}
