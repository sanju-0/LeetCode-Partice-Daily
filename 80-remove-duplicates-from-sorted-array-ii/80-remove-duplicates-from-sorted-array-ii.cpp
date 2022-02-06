class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans = 0;
        for (auto e : nums) {
            if (ans < 2 || e > nums[ans - 2])
                nums[ans++] = e;
        }
        return ans;
    }
};