class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
      vector<int> ans;
        int sum = 0;
        for(auto i : nums) {
            if(i%2 == 0) {
                sum += i;
            }
        }
        for(auto x : queries) {
            int idx = x[1];
            int temp = x[0];
            if(nums[idx]%2 == 0) {
                sum -= nums[idx];
            }
            nums[idx] += temp;
            if(nums[idx]%2 == 0) {
                sum += nums[idx];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};