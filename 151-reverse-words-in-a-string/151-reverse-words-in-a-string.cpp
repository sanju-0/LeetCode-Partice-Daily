class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int i = 0, n = s.length();
        
        while(i < n){
			//to detect spaces and ignore them
            while(i < n && s[i] == ' ') i++;
            
            if(i >= n) break;
            
            int j = i;
            
			//to detect characters and break when we detect any space
            while(j < n && s[j] != ' ') j++;
            
			//to take out the first word
            string temp = s.substr(i, j-i);
            
            if(ans.length() == 0) ans = temp;
            
            else ans = temp + " " + ans;
            
            i = j+1;
        }
        
        return ans;
    }
}; 
 