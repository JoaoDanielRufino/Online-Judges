// https://www.nayuki.io/page/next-lexicographical-permutation-algorithm

string biggerIsGreater(string w) {
    if(next_permutation(w.begin(), w.end()))
        return w;
    
    return "no answer";
}
