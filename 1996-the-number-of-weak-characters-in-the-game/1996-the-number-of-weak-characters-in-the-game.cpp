class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b){
        if(a[0]!=b[0])
            return a[0]>b[0];
        return a[1]<b[1];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& p) {
      sort(p.begin(),p.end(),comp);
        int maxVal = INT_MIN;
        int ans=0;
        for(auto i:p){
            if(maxVal>i[1]) {
             ans++;   
            } 
            else maxVal = i[1];
        }
        return ans;  
    }
};