class Solution {
    private:
        vector<vector<int>> ans;
    
    public:
    
        void backTrack(int st, int n,  vector<int> arr, int k){            
            if(arr.size() == k){
                ans.push_back(arr);
                return ;
            }
            
            if(st > n)
                return ;
            
            for(int i=st; i<=n; i++){
                arr.push_back(i);
                backTrack(i+1, n, arr, k);
                arr.pop_back();
            }
            
        }
    
        vector<vector<int>> combine(int n, int k) {
            vector<int> curr;
            backTrack(1, n,curr, k);
            return ans;
        }
};