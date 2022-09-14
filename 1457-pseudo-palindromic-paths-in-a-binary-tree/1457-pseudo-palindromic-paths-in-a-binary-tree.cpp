/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int pseudoPalindromicPaths (TreeNode* root) {
       vector<int> store (10,0);
        int count = 0;
        temp(root, store, count);
        return count;
    }
    void temp(TreeNode* root, vector<int>& n, int& ans) {
        if(root == NULL) return;
        n[root->val]++;
        temp(root->left, n, ans);
        temp(root->right, n, ans);
        
        // if we raech at end point of path.
        if(root->left==NULL && root->right==NULL) {
            // check odd occurance.
            int odd = 0;
            for(int i=1;i<=9;i++) {
              if(n[i]%2!=0) odd++;  
            }
            if(odd==1 || odd==0) ans++;
        }
        n[root->val]--;
    }
};