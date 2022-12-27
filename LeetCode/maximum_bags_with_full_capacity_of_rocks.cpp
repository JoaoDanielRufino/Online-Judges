class Solution {
public:
    static bool comp(pair<int, int> a, pair<int, int> b) {
        return (a.first - a.second) < (b.first - b.second);
    }

    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<pair<int, int>> capacityWithRocks;

        for(int i = 0; i < capacity.size(); i++) {
            capacityWithRocks.push_back({ capacity[i], rocks[i] });
        }

        sort(capacityWithRocks.begin(), capacityWithRocks.end(), comp);

        int ans = 0;
        for(pair<int, int> curr : capacityWithRocks) {
            if(curr.first == curr.second)
                ans++;
            else if(curr.first > curr.second) {
                int diff = curr.first - curr.second;
                if(additionalRocks >= diff) {
                    ans++;
                    additionalRocks -= diff;
                } else {
                    break;
                }
            }
        }

        return ans;
    }
};
