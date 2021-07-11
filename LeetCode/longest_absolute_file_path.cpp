class Solution {
public:    
    int lengthLongestPath(string input) {
         stringstream ss(input);
         string data;
         unordered_map<int,int>len;
         int res = 0;
		 
         while(getline(ss, data, '\n')) {
             int numTabs  = 0;
			 
             while(data[numTabs] == '\t') numTabs++;
			 
             if(numTabs == 0)
                 len[numTabs] = data.size();
             else
                 len[numTabs] = len[numTabs - 1] + 1 + data.substr(numTabs).size();
			 
             if(data.find('.') != string :: npos)
                 res = max(res, len[numTabs]);
         }
		 
        return res;
    }
};
