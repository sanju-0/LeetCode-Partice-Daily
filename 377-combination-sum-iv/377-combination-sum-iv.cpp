class Solution {
public:
    // // By recussion     - T.C - O(N^2)
    // int solve(vector<int>& nums, int tar) {
    //   // base case 1.
    //     if(tar < 0) {
    //         return 0;
    //     }
    //   // Base case 2.
    //    if(tar == 0) {
    //        return 1;
    //    }
    //    int sum = 0;
    //    for(int i=0;i<nums.size();i++) {
    //        sum += solve(nums, tar-nums[i]);
    //    }
    //     return sum;
    // }
    
    // By DP memory approch        - T.C - O(TAR).
    int solveMem(vector<int>& nums, int tar, vector<int>& dp) {
       // base case 1.
        if(tar < 0) {
            return 0;
        }
      // Base case 2.
       if(tar == 0) {
           return 1;
       }
       if(dp[tar] != -1) {
           return dp[tar];
       }
       int sum = 0;
       for(int i=0;i<nums.size();i++) {
           sum += solveMem(nums, tar-nums[i], dp);
       }
        dp[tar] = sum;
        return dp[tar];  
    }
    
    // // By DP table approch          - T.C - O()
    // int solveTab(vector<int>& nums, int tar) {
    //   vector<int> dp[tar+1, 0];
    //   dp[0] = 1;
    //   // traversing from 1 to tar.
    //   for(int i=1;i<=tar;j++) {
    //       for(int j=0;j<nums.size();j++) {
    //           if(i-nums[j] >= 0)
    //             dp[i] = dp[i - nums[j]];
    //       }
    //    }
    //    return dp[tar];
    // }
    
    int combinationSum4(vector<int>& nums, int target) {
     // return solve(nums, target);
      vector<int> dp(target+1, -1); 
      return solveMem(nums,target,dp); 
     // return solveTab(nums, target);
    }
};