class Solution {
    static bool camp(vector<int>& a, vector<int>& b){
        if(a[0] == b[0]){                               // [5,1],[5,0]    => [5,0],[5,1]
            return a[1]<b[1];     
        } 
        return a[0]<b[0];
    }
    
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& p) {
       // for fast ouput.  
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
       cout.tie(NULL); 
        
       sort(p.begin(),p.end(),camp);
       int n = p.size();
       // ans array in which we put the righ postions of our input array.
       vector<vector<int>> ans(n,vector<int>(2,-1));              // -1 = NULL 
       
       for(int i=0;i<n;i++){
           int count = p[i][1];
           for(int j=0;j<n;j++){
               if(ans[j][0]==-1 and count==0){
                   ans[j][0] = p[i][0];
                   ans[j][1] = p[i][1];                                     // ans = [3,0];
                   break ;   
               }
               else if(ans[j][0]==-1 or ans[j][0]>=p[i][0]){
                   count-=1;
               }
           }
       }
        return ans;
    }
};