class MedianFinder {   
public:
    vector<int> vet;
    
    int lowerBound(int target) {
        int l = 0, r = vet.size()-1;
        
        while(l <= r) {
            int mid = l + (r - l)/2;
            if(vet[mid] >= target)
                r = mid-1;
            else
                l = mid+1;
        }
        
        return l;
    }
    
    /** initialize your data structure here. */
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(!vet.size())
            vet.push_back(num);
        else {
            int lb = lowerBound(num); // Finding the insertion position
            vet.insert(vet.begin() + lb, num);
        }
    }
    
    double findMedian() {
        int size = vet.size();
        if(size & 1)
            return vet[size/2];
        return (vet[size/2-1] + vet[size/2]) / 2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */