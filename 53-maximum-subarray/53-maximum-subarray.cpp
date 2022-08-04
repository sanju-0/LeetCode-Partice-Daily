class Solution {
public:
    int maxSubArray(vector<int>& num) {
      int n=num.size();
        int sum=0;
        int maxsize=INT_MIN;
        for(int i=0;i<n;i++){
            if(sum<0){
                sum=0;
            }
            sum+=num[i];
            maxsize=max(maxsize,sum);
        }
        return maxsize; 
    }
};