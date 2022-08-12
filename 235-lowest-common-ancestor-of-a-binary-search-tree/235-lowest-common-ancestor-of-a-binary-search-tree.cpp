/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
     if(root->val == p->val or root->val == q->val) {
         return root;
      }
      if(!root->left && !root->right) {
          return NULL;
      }
      TreeNode *left_val = NULL, *right_val =  NULL;
      if(root->left) {
          left_val = lowestCommonAncestor(root->left,p,q);
      }
      if(root->right) {
          right_val = lowestCommonAncestor(root->right,p,q);
      }
      if(left_val and right_val) return root;
      return left_val==NULL?right_val:left_val;
    }
};