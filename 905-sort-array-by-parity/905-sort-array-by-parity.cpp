class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      int i = 0;      // start from unsolve array
      int j = 0;      // start from odd number
        while(i < nums.size()){
            if(nums[i]%2 == 0){
                // even condition -> swap, i++, j++
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;  // for odd
                j++;  // for even
            }
            else{
                // odd condition
                i++;
            }
        }
        return nums;
    }
};