class Solution {
public:
    static bool comp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b) {
        return a.first.first < b.first.first;
    }

    vector<int> getOrder(vector<vector<int>>& tasks) {
        vector<pair<pair<int, int>, int>> auxTasks; // <<enqueueTime, processingTime>, index>

        for(int i = 0; i < tasks.size(); i++) {
            auxTasks.push_back({ { tasks[i][0], tasks[i][1] }, i});
        }

        sort(auxTasks.begin(), auxTasks.end(), comp);

        vector<int> ans;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // <processingTime, index>

        int task = 0;
        unsigned int currTime = 0;
        while(task < auxTasks.size() || !pq.empty()) {
            if(pq.empty() && currTime < auxTasks[task].first.first) {
                currTime = auxTasks[task].first.first;
            }

            while(task < auxTasks.size() && currTime >= auxTasks[task].first.first) {
                pq.push({ auxTasks[task].first.second, auxTasks[task].second });
                task++;
            }

            pair<int, int> pqItem = pq.top();
            pq.pop();

            currTime += pqItem.first;
            ans.push_back(pqItem.second);
        }

        return ans;
    }
};
