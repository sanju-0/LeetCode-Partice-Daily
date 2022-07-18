class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
     int rows = matrix.size(), cols = matrix[0].size();
     
     // base case if rows = 0
     if(rows < 1) {
         return 0;
       }
        
    // Prefix sum calculate for each rows -> rows wise
    for(int i=0;i<rows;i++) {
         for(int j=1;j<cols;j++) {
             matrix[i][j] = matrix[i][j] + matrix[i][j-1];
         } 
       }
    int count = 0, sum;
    unordered_map<int, int> mp;
    for(int i=0;i<cols;i++) {
         for(int j=i;j<cols;j++) {
             mp.clear();
             mp[0] = 1;
             sum = 0;
             for(int k=0;k<rows;k++) {
                 sum += matrix[k][j] - (i > 0 ? matrix[k][i-1] : 0);
                 count += (mp.find(sum - target) != mp.end() ? mp[sum-target] : 0);
                 mp[sum]++;
             }
         }
       }
        return count;
    }
};