class Solution {
public:
    int candy(vector<int>& r) {
     int n = r.size();
     int ans = 0;
     // we make a array for left values here
     vector<int>left(n,1);
     for(int i=1;i<n;i++){
         if(r[i]>r[i-1]) left[i] = left[i-1]+1;
      }
      // we make a array for righ values now:
     vector<int>right(n,1);
     for(int i=n-2;i>=0;i--){
         if(r[i]>r[i+1]) right[i] = right[i+1]+1;
      }
    // here we add max value from left and right into ans.
    for(int i=0;i<n;i++){
        ans += max(left[i],right[i]);
      }
        return ans;
    }
};