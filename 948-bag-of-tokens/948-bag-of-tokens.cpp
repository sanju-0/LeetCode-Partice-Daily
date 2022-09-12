class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
      sort(tokens.begin(), tokens.end());
        int score = 0;
        int count = 0;
        int i = 0, j = tokens.size()-1;
        // untill we reach the point where i and j are same.
        while(i<=j) {
            // if i val is samll then power we add our score and move ahead.
            if(tokens[i] <= power) {
                score += 1;
                if(count < score) {
                    count = score;
                }
                power -= tokens[i];
                i++;
            }
            // if we are out of moves we take max power of array and go ahead.
            else if(score > 0) {
                power += tokens[j];
                score-=1;
                j--;
            }
            else {
                break;
            }
        }
        return count;
    }
};