class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int i;
        for(i=0;i<n;i++){
            // if target is small
            if(nums[i]>target)
                return i;
            // if target find in array
            if(nums[i]==target)
                return i;
        }
        return i;  
    }
};