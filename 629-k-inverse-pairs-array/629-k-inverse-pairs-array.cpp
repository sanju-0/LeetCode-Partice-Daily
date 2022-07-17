const int mod = 1e9 + 7, N = 1001;
class Solution {
    int dp[N][N] = {};
public:
    int kInversePairs(int n, int K) {
        dp[0][0] = 1;
        for (int i = 1; i <= n; ++ i){
            long long x = 0; 
            for (int j = 0; j <= K; ++ j){
                x += dp[i - 1][j];
                if (j >= i)
                    x -= dp[i - 1][j - i];
                dp[i][j] = ((long long)dp[i][j] + x) % mod; 
            }
        }
        return dp[n][K];
    }
};
/* int dp[n+1][k+1];
     memset(dp,0,sizeof(dp));
     for(int a=1;a<=n;a++) 
         for(int b=0;b<=k;b++) {
             // if k == 0 then we return 1;
             if(b == 0) dp[a][b] = 1;
             else
              for(int i=0;i<=min(b,a-1);i++) 
              dp[a][b] = (dp[a][b] + dp[a-1][b-i])%10000000007;    
         }
     return dp[n][k]; */