class Solution {
public:
    static bool camp(vector<int>& a, vector<int>& b){
        return a[1] > b[1];
    }
    
    int maximumUnits(vector<vector<int>>& b, int t) {
      sort(b.begin(),b.end(),camp);
      int ans = 0;
      for(auto n:b){
        int x = min(n[0],t);// minimum to check wheather give box do not over truck size.  
        ans += (x*n[1]);    // no of unites.
        t-=x;     // reduce the size beacuse we take up x boxes.
        if(!t) break;   // if capacity is full.
       }
       return ans;
    }
};

