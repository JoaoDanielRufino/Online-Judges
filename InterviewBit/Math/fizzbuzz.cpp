vector<string> Solution::fizzBuzz(int A) {
    vector<string> res;
    
    for(int i = 1; i <= A; i++) {
        if(!(i % 3) && !(i % 5))
            res.push_back("FizzBuzz");
        else if(!(i % 5))
            res.push_back("Buzz");
        else if(!(i % 3))
            res.push_back("Fizz");
        else
            res.push_back(to_string(i));
    }
    
    return res;
}
