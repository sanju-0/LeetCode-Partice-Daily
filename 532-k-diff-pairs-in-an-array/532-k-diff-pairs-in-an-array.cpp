class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int x: nums) mp[x]++;
        int ans=0;
        if(k==0)
        {
            for(auto x: mp) if(x.second>1) ans++;
        }
        else
        {
            for(auto x: mp)
            {
                if(mp.count(x.first + k) > 0) ans++; 
            }
        }
        return ans;
    }
};