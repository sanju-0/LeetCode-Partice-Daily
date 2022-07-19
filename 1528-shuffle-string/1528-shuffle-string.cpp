class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
      string a = s;
      int n = indices.size();
      for(int i=0;i<n;i++) {
          a[indices[i]] = s[i]; 
      }
        return a;
    }
};