class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
     int n = stones.size();
     int sum = 0;
     // Knowing whole sum of array.
     for(int i=0;i<n;i++){
        sum += stones[i]; 
      }
     int large = 0;
     // Dp vector buliding with all false values.
     vector<bool> dp(sum/2+1, false);
     dp[0] = true;
     // we check least difference in 2 sub arrays
     for(int i=0;i<n;i++){
       for(int j=sum/2;j>=stones[i];j--){
           dp[j]=dp[j] or dp[j-stones[i]];
           if(dp[j] == true){
            large = max(large,j);  
           }
         }  
      }
        return sum-2*large;
    }
};