class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxPro = 0;
        int minNum = INT_MAX;
        for(int i=0;i<n;i++){
            minNum = min(minNum, prices[i]);
            maxPro = max(maxPro, prices[i] - minNum);
        }
        return maxPro;
    }
};