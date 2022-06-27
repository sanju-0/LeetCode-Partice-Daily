class Solution {
public:
    int minPartitions(string n) {
       int ans = 0;
       for(char x:n){
           // asci value start from 48 and end means 9 = 57
           int curr = x - 48;
           ans = max(ans,curr);
       }
        return ans;
    }
};