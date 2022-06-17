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
    int cam = 0;
    int helper(TreeNode* root){
      if(root==NULL) return 1;
        
      int lchild = helper(root->left);
      int rchild = helper(root->right);  
      if(lchild == -1 || rchild == -1){
          cam++;
          return 0; // Now I have camera return by child to node.
      }
      if(lchild == 0 || rchild == 0) return 1;
        
      return -1;
    }
    int minCameraCover(TreeNode* root) {
      if(helper(root) == -1) cam++;
     return cam;
    }
};