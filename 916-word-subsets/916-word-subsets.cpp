class Solution {
public:
    // counting the frequency of each string.
    vector<int> countFreq(string& words) {
        vector<int> freq(26);
        for(auto& c:words) freq[c - 'a']++;
        return freq;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
     vector<int> maxFreq(26); 
     vector<string> ans;
     for(auto& w:words2) {
         vector<int> freq = countFreq(w);
         for(int i=0;i<26;i++) maxFreq[i] = max(maxFreq[i], freq[i]);
      }
     for(auto& a:words1) {
         vector<int> freq = countFreq(a);
         int i = 0;
         for(;i<26;i++) if(freq[i] < maxFreq[i]) break;
         if(i==26) ans.push_back(a);
     }
     return ans;
    }
};