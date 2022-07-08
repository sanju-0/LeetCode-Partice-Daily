class Solution {
public:
    int minDifference(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int n = nums.size();
      if(n <= 4) return 0;
      
      // if we change all samllest number
      int minDiff = nums[n-1]-nums[3];
        
      // if we change all lagest number
      minDiff = min(minDiff, nums[n-4]-nums[0]);
        
      // if we change 1 larger + 2 smaller
      minDiff = min(minDiff, nums[n-2]-nums[2]);
    
     // if we change 2 lager + 1 smaller
     minDiff = min(minDiff, nums[n-3]-nums[1]);
        
     return minDiff;
    }
};
// 1,5,0,10,14 => 0,1,5,10,14
// 1. 14 - 10 = 4
// 2. 1- 0 = 1
// 3. 10 - 5 = 5
// 4. 5 - 1 = 4