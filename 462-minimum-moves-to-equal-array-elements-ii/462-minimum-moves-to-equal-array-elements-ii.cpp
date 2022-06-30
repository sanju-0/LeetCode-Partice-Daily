class Solution {
public:
    int minMoves2(vector<int>& nums) {
     // Short the array
      sort(nums.begin(),nums.end());
        
    // Calculated the steps
    // we make to pointers
       int i = 0, j = nums.size()-1;
       int steps = 0;
       while(i<j){
         steps += (nums[j] - nums[i]);
         i++;
         j--;
       }
      return steps;
    }
};