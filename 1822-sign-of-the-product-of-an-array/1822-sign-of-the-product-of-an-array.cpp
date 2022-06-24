class Solution {
public:
    int arraySign(vector<int>& nums) {
      int sum = 0;
      for(auto i:nums){
          if(i < 0) sum ++;
          else if(i == 0) return 0;
      }
      if(sum%2 == 0) return 1;
      return -1;
    }
};