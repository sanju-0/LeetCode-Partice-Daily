class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       int count[26] = {0};
       for(char i : magazine) {
           count[i - 'a']++;
       }
       for(char ch : ransomNote) {
           if(count[ch - 'a'] == 0) {
               return false;
           }
           count[ch - 'a']--;
       }
        return true;
    }
};