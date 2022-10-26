class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       // We are using map in this question.
     int n = nums.size();
     // base case if we have elements less than 2.
     if(n < 2) {
         return false;
       }
     // Map build here.
     unordered_map<int,int> mp;
     int sum = 0;
     mp[0] = -1;
     for(int i=0;i<n;i++) {
        sum += nums[i];
         if(k != 0) {
             sum = sum%k;
         }
         // check if sum is already there in map.
         if(mp.find(sum) != mp.end()) {
             // if we have sum.
             if(i-mp[sum] > 1) {
                 return true;
             }
          }             
             else {
                 // if we don't have sum then we store our current sum in that.
                 mp[sum] = i;
             }
         }
        return false;
    }
};