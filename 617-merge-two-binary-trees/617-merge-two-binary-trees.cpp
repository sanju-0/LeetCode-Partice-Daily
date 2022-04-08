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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        // if root1 is null and root2 have value - we put root2 value
        if(!root1) return root2;
        // if root2 is null and root1 have value - we put root1 value
        if(!root2) return root1;
        // if both roots have value - we add both values
        root1->val += root2->val;
        // repeat process again and again
        if(root2->left) root1->left = mergeTrees(root1->left,root2->left);
        if(root2->right) root1->right = mergeTrees(root1->right,root2->right);
        return root1;
    }
};