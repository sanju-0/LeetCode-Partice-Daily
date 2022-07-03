class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
      int n = nums.size();
        if(n==1){
            return 1;
        } 
        int prevdiff = nums[1]-nums[0];
        int ans = 0;
        if(prevdiff!=0){
            ans = 2;
        }
        else{
            ans = 1;
        }
        for(int i=2;i<n;i++){
            int currdiff = nums[i] - nums[i-1];
            if((prevdiff>=0 and currdiff<0) || (currdiff>0 and prevdiff<=0)){
                ans++;
                prevdiff = currdiff;
            }
        }
        return ans;
    }
};