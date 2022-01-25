class Solution {
public:
    void sortColors(vector<int>& nums) {
       int zeros_count = 0;
       int ones_count = 0;
       int twos_count = nums.size()-1;
        
        while(ones_count <= twos_count){
            if(nums[ones_count] == 0){
                swap(nums[zeros_count],nums[ones_count]);
                ones_count++;
                zeros_count++;
            }
            else if(nums[ones_count] == 1)
                ones_count++;
            else if(nums[ones_count] == 2){
                swap(nums[ones_count],nums[twos_count]);
                twos_count--;
            }
        }
    }
};