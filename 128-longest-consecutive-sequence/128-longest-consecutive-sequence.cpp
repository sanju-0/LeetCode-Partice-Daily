class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     int max_len = 0;
     unordered_set<int> num_set(nums.begin(), nums.end());
     for (int num : nums) {
        if (num_set.find(num - 1) == num_set.end()) {
            int curr_num = num;
            int curr_len = 1;
            while (num_set.find(curr_num + 1) != num_set.end()) {
                curr_num++;
                curr_len++;
                }
                max_len = max(max_len, curr_len);
            }
        }
        return max_len;
    }
};
/* set<int> hashSet;
     for(int n:nums){
        hashSet.insert(n); 
      }
      int longestStreak = 0;
      for(int n:nums){
          if(!hashSet.count(n-1)){
              int currentNum = n;
              int currentStreak  = 1;
              while(hashSet.count(currentNum+1)){
                  currentNum += 1;
                  currentStreak += 1;
              }
              longestStreak = max(longestStreak, currentStreak);
          }
       }
      return longestStreak;  */
      