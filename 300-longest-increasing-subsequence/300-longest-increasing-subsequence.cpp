class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
    int n = nums.size(), ans = 1;
     vector<int> dp(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j] && dp[i]<dp[j]+1)
                    dp[i] =1+dp[j];
                ans = max(ans, dp[i]);
            }
        }
        return ans;
    }
};

/*
   int n = nums.size(), ans = 1;
     vector<int> dp(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j] && dp[i]+1 > dp[j])
                    dp[i] = max(dp[i],dp[j]+1);
                ans = max(ans, dp[i]);
            }
        }
        return ans;
*/