class Solution {
public:
    int myAtoi(string s) {
      // for -ve sign
        int sign = 1, ans = 0, i = 0;
    
        // ignore whitespace 
        while(s[i] == ' '){
            i++;
        }
        if(s[i] == '-' || s[i] == '+'){
            sign = 1 - 2 * (s[i++] == '-');
        }
        while(s[i] >='0' && s[i] <='9'){
            if(ans >INT_MAX/10 || (ans == INT_MAX/10 && s[i] - '0' > 7)){
                if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
            }
            ans = 10 * ans + (s[i++] - '0');
        }
        return ans * sign;
    }
};