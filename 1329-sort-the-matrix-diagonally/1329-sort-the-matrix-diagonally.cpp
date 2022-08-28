class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
     int n = mat.size();
     int m = mat[0].size();
        
        vector<vector<int>> ans(n, vector<int>(m, 0));
        // diagonal we are shorting
        for(int i = 0;i < m;i++){
            int a = 0;
            int b = i;
            vector<int> temp;
            while(a<n && b < m){
                temp.push_back(mat[a][b]);
                a++;
                b++;
            }
            sort(temp.begin(), temp.end());
            a = 0;
            b = i;
            for(int i = 0;i < temp.size();i++){
                ans[a][b] = temp[i];
                a++;
                b++;
            }
        }
        
        for(int i = 1;i < n;i++){
            int a = i;
            int b = 0;
            vector<int> temp;
            while(a<n && b < m){
                temp.push_back(mat[a][b]);
                a++;
                b++;
            }
            sort(temp.begin(), temp.end());
            a = i;
            b = 0;
            for(int i = 0;i < temp.size();i++){
                ans[a][b] = temp[i];
                a++;
                b++;
            }
        }
        return ans;
    }
};