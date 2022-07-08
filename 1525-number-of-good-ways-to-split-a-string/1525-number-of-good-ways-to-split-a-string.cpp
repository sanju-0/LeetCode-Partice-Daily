class Solution {
public:
    int numSplits(string s) {
     int goodSplit = 0;
        
     unordered_set<char>S1, S2;
        
     vector<int>prefix(s.size(),-1);
        
     vector<int>suffix(s.size(),-1);
     
     for(int i=0;i<s.size()-1;i++){
         S1.insert(s[i]);
         prefix[i] = S1.size(); 
      }
     for(int i=s.size()-1;i>0-1;i--){
         S2.insert(s[i]);
         suffix[i] = S2.size(); 
      }
     for(int i=0;i<s.size()-1;i++){
         if(prefix[i] == suffix[i+1]){
            goodSplit++; 
         }
       }
     return goodSplit;
    }
};