class Solution {
public:
    string removeKdigits(string num, int k) {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
        
      int l = num.size();
      stack<char> st;
      for(char c: num){
          while(!st.empty() and k>0 and st.top()>c){
              st.pop();
              k-=1;
          }
          if(!st.empty() or c!='0') st.push(c);
      }
        while(!st.empty() and k--) st.pop();
        if(st.empty()) return "0";
        
      while(!st.empty()){
          num[l-1] = st.top();
          st.pop();
          l-=1;
      } 
        return num.substr(l);
    }
};