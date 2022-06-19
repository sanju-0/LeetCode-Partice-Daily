class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& p, string s) {
        // sort the string
        sort(p.begin(),p.end());
        vector<vector<string>> ans;       // stroe the answer
        int left = 0, right = p.size()-1;     // these are two pointer
        for(int i=0;i<s.length();i++){
            vector<string> temp;
            char c = s[i];
            // we move our pointers
            while(left <= right and (p[left].length() == i or p[left][i] < c)) left++;
            while(left <= right and (p[right].length() == i or p[right][i] > c)) right--;
            // we add 3 or less then 3 words into our temp then into answer
            for(int j=0;j<3 && left + j<=right;j++){
                temp.push_back(p[left+j]);
            }
            ans.push_back(temp);        // temp to ans.
        }
        return ans;
    }
};