class Solution {
public:
    void dfs(vector<vector<int>>& rooms, int current, vector<bool>& seen) {
        seen[current] = true;

        for(int adj : rooms[current]) {
            if(!seen[adj])
                dfs(rooms, adj, seen);
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> seen(rooms.size());

        dfs(rooms, 0, seen);

        for(int x : seen) {
            if(!x)
                return false;
        }

        return true;
    }
};
