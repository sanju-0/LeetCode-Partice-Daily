class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int ans = nums.size()*(nums.size()+1)/2;
        for(int i : nums){
            sum += i;
        }
        return ans-sum;
    }
};