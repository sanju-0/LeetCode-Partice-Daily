class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        if(intervals.size() == 0) return ans;
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        int pointer = 0;
        for(int i=1;i<intervals.size();i++){
            if(ans[pointer][1] >= intervals[i][0])
                ans[pointer][1] = max(ans[pointer][1],intervals[i][1]);
            else{
                pointer++;
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};