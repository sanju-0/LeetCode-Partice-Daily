class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int first = -1;
       int last = -1;
        vector<int> result;
        int low = 0;
        int high = nums.size()-1;
        // first binary search here.
        while(low < high){
            int mid = low + (high - low)/2;
            if(nums[mid] < target){
                low = mid + 1;
            } else{
                high = mid;
            }
        }
        first = low;
        if(low < nums.size() && nums[low] == target){
            int low = 0;
        int high = nums.size()-1;
        // 2nd binary search here.
        while(low < high){
            int mid = low + (high - low+1)/2;
            if(nums[mid] > target){
                high = mid - 1;
            } else{
                low = mid;
            }
        }
           last = high;
            result.push_back(first);
            result.push_back(last);
            return result;
        }
        result.push_back(-1);
        result.push_back(-1);
        return result;
    }
};