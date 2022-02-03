class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
       map<int,int> mp;
        for(int v : nums3)
            for(int l : nums4)
                mp[v + l]++;
        int ans = 0;
        for(int i : nums1)
            for(int j : nums2)
                        ans += mp[-(i + j)];
        return ans;
    }
};