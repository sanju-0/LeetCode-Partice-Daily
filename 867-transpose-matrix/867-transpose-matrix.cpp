class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
     int len = matrix.size();
     int m = matrix[0].size();
     
        // We create ans or result matrix here
     vector<vector<int>> ans(m,vector<int>(len,0));
        for(int i=0;i<len;i++){
            for(int j=0;j<m;j++){
                // we are just swaping values 
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
};