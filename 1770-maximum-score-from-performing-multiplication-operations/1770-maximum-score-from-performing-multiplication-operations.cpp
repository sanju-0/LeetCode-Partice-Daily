class Solution {
public:
    // Now adding dp in it.
    vector<vector<int>> dp;
    int helperFun(int i,int left,int right,vector<int>& n,vector<int>& m) {
       int x = m.size();
       if(i == m.size()) {
           return 0;
       } 
       if(dp[i][left] != INT_MIN) {
           return dp[i][left];
       }
        int l = m[i]*n[left]+helperFun(i+1,left+1,right,n,m);
        int r = m[i]*n[right]+helperFun(i+1,left,right-1,n,m);
        
        return dp[i][left] = max(l,r);
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
     // We are using recusion.
     int n = nums.size();
     int m = multipliers.size();
     dp.assign(m+1, vector<int> (m+1, INT_MIN));
     return helperFun(0,0,n-1,nums,multipliers);
    }
};