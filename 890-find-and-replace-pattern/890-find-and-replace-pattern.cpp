class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
       vector<string> ans;
        
        for(int i=0;i<words.size();i++) {       // words list.
            // for each word
            map<char,char> mp1;
            map<char,char> mp2;
            int flag = 1;
            for(int j=0;j<words[i].size();j++) {
             // word[i] = "mee" = abb
            auto it = mp1.find(pattern[j]);   // find 'a'
            auto it2 = mp2.find(words[i][j]);  // find 'm'
                if(it == mp1.end()) {
                    mp1.insert({pattern[j], words[i][j]});   // 'a' : 'm';
                }
               else {
                   if(it->second != words[i][j]) {          // 'a':'r';
                      flag = 0;
                       break;
                   }    
               }
              if(it2 == mp2.end()) {
                    mp2.insert({words[i][j], pattern[j]});   // 'm' : 'a';
                }
               else {
                   if(it2->second != pattern[j]) {          
                      flag = 0;
                       break;
                   }    
               }  
            }
            if(flag) ans.push_back(words[i]);  
        }
        return ans;
    }
};