class Solution {
public:
    char findTheDifference(string s, string t) {
        char a = 0;
        for(char cs: s) a ^= cs;
        for(char ct: t) a ^= ct;
        return a;
    }
};