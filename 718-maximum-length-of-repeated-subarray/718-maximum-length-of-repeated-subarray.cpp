class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
      // Window silding
      int n = nums1.size();
      int m = nums2.size();
        int maxCount = 0;
      for(int i=-m+1;i<n;i++) {     
          int count = 0;
         for(int j=0;j<m;j++) {
             if(i+j < 0) {   // -4 + 4 = 0.
                 continue;
             }
             else if(i+j>=n) {
                 break;
             }
             else if(nums1[i+j]==nums2[j]) {
                 count++;
                 maxCount = max(maxCount, count);
             }
             else {
                 count = 0;
             }
         }
      }
      return maxCount;
    }
};