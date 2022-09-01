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
    int gnCount = 0;
    void dfs(TreeNode* root, int currMax) {
        if(!root) return;
        if(root->val >= currMax) {
            gnCount++;
            currMax = max(root->val, currMax);
        }
        dfs(root->right , currMax);
        dfs(root->left , currMax);
    }
    
    int goodNodes(TreeNode* root) {
      dfs(root, root->val);
        return gnCount;
    }
};