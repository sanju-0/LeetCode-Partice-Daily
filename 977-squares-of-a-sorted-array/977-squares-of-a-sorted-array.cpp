class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      int l = 0, h = nums.size()-1;
        int i = nums.size() - 1;
        vector<int> v(nums.size(), 0);
        while(l <= h)
        {
            int lsq = nums[l]*nums[l];
            int rsq = nums[h]*nums[h];
            if(lsq > rsq)
            {
                v[i] = lsq;
                l++;
            }
            else
            {
                v[i] = rsq;
                h--;
            }
            i--;
        }
        return v;
    }
};