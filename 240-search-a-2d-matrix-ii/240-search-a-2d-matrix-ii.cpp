class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int n = matrix.size();   // no. of rows.
      int m = matrix[0].size();   // no. of col.
      // We are gone use binary search here.
      int low, mid, high;  
      // we check low, mid, high val in each row and then move to next row.
      for(int i=0;i<n;i++) {
          if(m==1 && matrix[i][0]==target) return true;
          else{
            if(matrix[i][0] <= target && matrix[i][m-1] >= target) {
            low = 0;
            high = m-1;
            if(low == high && matrix[i][low] == target) return true;
            while(low <= high) {
                mid = low + (high-low)/2;
                if(matrix[i][mid] == target) return true;
                else if(matrix[i][mid] < target) low = mid+1;
                else if(matrix[i][mid] > target) high = mid-1;
            }
          }
        }      
      }
      return false;
    }
};