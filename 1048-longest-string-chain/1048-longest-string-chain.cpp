class Solution {
public:
    // Check the char os arr[i] and arr[j]
    bool compareChar(string &s1 , string &s2){
        if(s1.size() != s2.size() + 1) return false;
        int ptr1 = 0;
        int ptr2 = 0;
        while(ptr1 < s1.size()){
          if(s1[ptr1] == s2[ptr2]){
              ptr1++;
              ptr2++;
          } 
          else{
              ptr1++;   // bcda - bda so only 1st ptr move 
          }
        }
      if(ptr1 == s1.size() and ptr2 == s2.size()) return true;
      return false;
    }
    
   static bool comp(string &s1 , string &s2){
    if(s1.length()<s2.length()) return true;
    else return false;
    }
    int longestStrChain(vector<string>& words) {
    sort(words.begin(), words.end(), comp);
     int n = words.size(), ans = 1;
     vector<int> dp(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(compareChar(words[i],words[j]) && dp[i]<dp[j]+1)
                    dp[i] =1+dp[j];
                ans = max(ans, dp[i]);
            }
        }
        return ans;  
    }
};