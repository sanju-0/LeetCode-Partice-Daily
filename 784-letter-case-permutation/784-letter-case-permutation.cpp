class Solution {
public:
    vector<string>ans;
    
    void solve(string curr, string s, int i){
        // if we come to end of string
        if(i == s.length()){
            ans.push_back(curr);
            return;
        }
        
        if(isdigit(s[i])){          // case 1 if we get digit 
            curr.push_back(s[i]);
            solve(curr,s,i+1);
        }
        
        else{
            // if we get uper alphabet
            string c1 = curr;
            c1.push_back(tolower(s[i]));
            solve(c1,s,i+1);
            
            // if we get lower case alphabet
            string c2 = curr;
            c2.push_back(toupper(s[i]));
            solve(c2,s,i+1);
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        //ans.clear();
      solve("",s,0);
          return ans;
    }
};