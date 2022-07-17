class Solution {
public:
    // We are creating 3d DP here.
    int dp[51][51][51];
    long int mod=1e9+7;
    
    int dfs(int m, int n, int maxMove, int row, int col) {
      // base cases.
      if(row<0 || row>=m || col<0 || col>=n) {
          return 1;
      }
      if(maxMove <= 0) {
          return 0;
      }
      if(dp[row][col][maxMove] != -1) {
          return dp[row][col][maxMove];
      }
      return dp[row][col][maxMove] = 
          (dfs(m,n,maxMove-1,row-1,col)%mod +
          dfs(m,n,maxMove-1,row+1,col)%mod +
          dfs(m,n,maxMove-1,row,col-1)%mod +
          dfs(m,n,maxMove-1,row,col+1)%mod)%mod;
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
      // put all value -1 in dp.
      memset(dp,-1,sizeof(dp));
      return dfs(m,n,maxMove,startRow,startColumn);
    }
};