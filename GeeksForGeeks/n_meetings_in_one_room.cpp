class Solution
{
    public:
    static bool comp(pair<int,int> a, pair<int,int> b) {
        return a.second < b.second;
    }
    
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> vet;
        
        for(int i = 0; i < n; i++) {
            vet.push_back(make_pair(start[i], end[i]));
        }
        
        sort(vet.begin(), vet.end(), comp);
        
        int ans = 1;
        int endMeeting = vet[0].second;
        for(int i = 1; i < vet.size(); i++) {
            if(vet[i].first > endMeeting) {
                ans++;
                endMeeting = vet[i].second;
            }
        }
        
        return ans;
    }
};
