class Solution {
    vector<vector<int>> res;
    void try_comb(vector<int>& comb, int k, int n, int st){
        if(k == comb.size()){
            if(n == 0) res.push_back(comb);
            return;
        }
        for(int i=st; i<=9; i++){
            comb.push_back(i);
            try_comb(comb,k,n-i,i+1);
            comb.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> comb;
        try_comb(comb,k,n,1);
        return res;
    }
};