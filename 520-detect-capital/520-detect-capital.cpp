class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int upper_cout = 0;
        
        for(int i=0;i<=n;i++){
            if(word[i]>='A' && word[i]<='Z')
                ++upper_cout;
        }
        if(upper_cout == n or upper_cout == 0 or (word[0]>='A' and word[0]<='Z' and upper_cout==1))
            return true;
        
        return false;
    }
};