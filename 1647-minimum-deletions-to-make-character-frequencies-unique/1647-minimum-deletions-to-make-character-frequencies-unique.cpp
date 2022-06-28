class Solution {
public:
    int minDeletions(string s) {
      vector<int> v(26);
      // we are adding all the freqency of char into vector.
      for(auto a:s){
          v[a-'a']++;
      }
      sort(v.begin(),v.end(),greater<int>());
      int sf = v[0];
      int ans = 0;
      for(auto a:v){
          if(a>sf){
              if(sf>0) ans+=(a-sf);
              else ans+=a;
          }
          sf = min(sf-1,a-1);
      }
        return ans;
    }
};