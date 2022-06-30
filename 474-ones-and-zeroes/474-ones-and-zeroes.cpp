class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
     // we make the 2d dp here
     vector<vector<int>> dp(m+1, vector<int>(n + 1));
     for(auto s:strs){
        int zeros = count(begin(s), end(s), '0');
        int ones = s.size() - zeros;
        for(int i=m;i>=zeros;i--)
           for(int j=n;j>=ones;j--)
               dp[i][j] = max(dp[i][j]                              // skip this one.
                              ,dp[i-zeros][j-ones]+1);               // or add this one into sub str.
       }
        return dp[m][n];
    }
};