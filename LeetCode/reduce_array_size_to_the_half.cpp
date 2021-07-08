class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int, int> mp;
        map<int, int>::iterator it;
        priority_queue<int> pq;
        
        for(int x : arr) {
            mp[x]++;
        }

        for(it = mp.begin(); it != mp.end(); it++) {
            pq.push(it->second);
        }
        
        int size = arr.size(), count = 0;
        while(pq.size()) {
            count++;
            size -= pq.top();
            pq.pop();
            if(size <= arr.size() / 2)
                break;
        }
        
        return count;
    }
};
