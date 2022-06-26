class Solution {
public:
    int maxScore(vector<int>& cP, int k) {
    int sum = 0;
        // here we sum up first k elemets.
    for(int i=0;i<k;i++) sum += cP[i];
        // we assume that curr sum is max so, we put it into our ans.
    int ans = sum;
        // here we start incressing number from backside and removing number from front side.
    for(int i=k-1,j = cP.size()-1; i>=0;i--,j--){
         sum += cP[j] - cP[i];
         ans = max(ans, sum);
      }
     return ans;
    }
};