class UndergroundSystem {
private:
    unordered_map<int, pair<string, int>> customerCheckIn;
    map<pair<string, string>, pair<int, int>> checkoutElapsedTime;
    
public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        customerCheckIn[id] = make_pair(stationName, t);
    }
    
    void checkOut(int id, string stationName, int t) {
        pair<string, int> checkIn = customerCheckIn[id];
        checkoutElapsedTime[{checkIn.first, stationName}].first += t - checkIn.second;
        checkoutElapsedTime[{checkIn.first, stationName}].second++;
    }
    
    double getAverageTime(string startStation, string endStation) {
        pair<int, int> elapsedTime = checkoutElapsedTime[{startStation, endStation}];
        return (double) elapsedTime.first / elapsedTime.second; 
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
