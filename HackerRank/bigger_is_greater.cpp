string biggerIsGreater(string w) {
    if(next_permutation(w.begin(), w.end()))
        return w;
    
    return "no answer";
}
