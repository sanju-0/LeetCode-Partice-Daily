class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
     int n = nums.size();
     int sum = 0;                      // Prefix sum = sum;
     unordered_map<int,int> mp;        // <Prefix sum, Index>
        // by this we are getting prefix sum
     for(int i=0;i<n;++i){           
         sum += nums[i];
         mp[sum] = i;
     }
       if(x > sum) return -1;     // base case
       mp[0] = 0;
       // longest = large length of our rest array which does not inculde in our operation to make x - 0;
       int longest = 0;
       sum -= x;        // value of rest;
       int val = 0;    // prefix value;
       for(int i=0;i<n;++i){
           val += nums[i];
           if(mp.count(val-sum)){
               if(val-sum==0)
                   longest = max(longest,i-mp[val-sum]+1);
               else
                   longest = max(longest,i-mp[val-sum]);
           }
       }
        return longest==0?(sum==0?n:-1):n-longest;
    }
};