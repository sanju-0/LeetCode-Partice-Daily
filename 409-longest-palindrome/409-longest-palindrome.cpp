class Solution {
public:
    int longestPalindrome(string s) {
    // Map used here 
    int ans = 0;
    unordered_map<char, int> mp;
    for(int i=0;i<s.size();i++) {
          mp[s[i]]++;
       }
    bool flag = false;
    for(auto a:mp) {
        // we have to add 2 in our ans everytime we get a same pair.
        ans += a.second - (a.second % 2);
        if(a.second % 2) {
           flag = true; 
         }
       }
       if(flag) {
           ans++;
       }
        return ans;
    }
};