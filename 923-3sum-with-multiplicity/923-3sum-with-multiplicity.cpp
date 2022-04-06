class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
     // we count all the occrance of each elements.
        vector<long>count(101,0);
        int mod = 1e9+7;
        long ans = 0;
        // counting done in this loop.
        for(auto x:arr){
            count[x]+=1;
        }
        // travinsing whole arr
        for(int i=0;i<=100;i++){
            for(int j=i;j<=100;j++){
                int k = target-i-j;
                // different conditions case are deal here.
                if(k<j || k>=count.size()){ 
                continue;
                }
                if(count[i]==0 || count[j]==0 || count[k]==0) {
                continue;
                }
                if(i==j && j==k){
                    ans=(ans+count[i]*(count[i]-1)*(count[i]-2)/6)%mod;
                }
                else if(i<j && j<k){
                    ans=(ans+count[i]*count[j]*count[k])%mod;
                }
                else if(i==j && j!=k){
                    ans=(ans+count[k]*count[i]*(count[i]-1)/2)%mod;
                }
                else if(i!=j && j==k){
                    ans=(ans+count[i]*count[j]*(count[j]-1)/2)%mod;
                }
            }
        }
        return ans;
    }
};