class Solution {
public:
    bool dfs(vector<int> mhs, int higval, vector<int> &sides, int idx){
      // base case
      if(idx == mhs.size()){
          if(sides[0] == sides[1] and sides[1] == sides[2] and sides[2] == sides[3]){
              return true;
          }
          return false;
       }
      for(int i=0;i<4;i++){
        if(sides[i] + mhs[idx] > higval){
            continue;
        }
          // we use dp here. optimization 3
        int j = i-1;
        while(j>=0){
            if(sides[j] == sides[i]){
                break;
            }
            j -= 1;
        }
        if(j != -1){
            continue;
        }
        sides[i] += mhs[idx];
        if(dfs(mhs,higval,sides,idx+1)){
            return true;
        }
         sides[i] -= mhs[idx];
      }
     return false;
    }
    
    bool makesquare(vector<int>& matchsticks) {
     // edge case
     if(matchsticks.size() == 0){
         return false;
      }
        // optimization 1 - high sum
     int sum = 0;
     for(int i=0;i<matchsticks.size();i++){
         sum += matchsticks[i];
     }
     int higval = sum/4;
     vector<int> sides(4,0);
     sort(matchsticks.begin(), matchsticks.end(), greater<int>()); // optimization 2 - sorting
     return dfs(matchsticks,higval,sides,0);
    }
};