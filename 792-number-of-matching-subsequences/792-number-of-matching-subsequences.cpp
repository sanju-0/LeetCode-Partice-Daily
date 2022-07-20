class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
    
     map<char,vector<int>> mp;
     int i = 0;
     for(auto x:s) {
        mp[x].push_back(i++);  
      }
     int count = 0;
     for(int i=0;i<words.size();i++) {
        // here we store first word from the words array.
        string curr = words[i];
        // last index we check for word.
        int last = -1;
        // we check all the words in curr now.
        for(int j=0;j<curr.size();j++) {
          auto it = upper_bound(mp[curr[j]].begin(), mp[curr[j]].end(), last);
          if(it == mp[curr[j]].end()) break;
            last = *it;
          if(j == curr.size()-1) count++;
        }
      }
      return count;
    }
};