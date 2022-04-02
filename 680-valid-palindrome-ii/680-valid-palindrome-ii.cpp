class Solution {
public:
    bool isPalindrome(string s,int i,int j){
        while(i < j){
          if(s.at(i) == s.at(j)){
                i++;
                j--;
            }
            else{
                // we already skip one char
                return false;
        }
        }
        return true;
    }
    
    bool validPalindrome(string s) {
       int i = 0;
        int j = s.size()-1;
        while(i < j){
            if(s.at(i) == s.at(j)){
                i++;
                j--;
            }
            else{
                // skip from left OR(OPITAION) skip from right
                return isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1);
            }
        }
        return true;
    }
};