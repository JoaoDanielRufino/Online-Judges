class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;

        for(int i = 0; i < flowerbed.size(); i++) {
            if(!flowerbed[i]) {
                bool leftEmpty = !i || !flowerbed[i-1];
                bool rightEmpty = (i == flowerbed.size() - 1) || !flowerbed[i+1];

                if(leftEmpty && rightEmpty) {
                    flowerbed[i] = 1;
                    count++;
                    if(count >= n)
                        break;
                }
            }
        }

        return count >= n;
    }
};
