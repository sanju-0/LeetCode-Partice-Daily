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
    vector<double> averageOfLevels(TreeNode* root) {
      queue<TreeNode*> q;
      vector<double> ans;
      // push 1st val in q.
      q.push(root);
      
      // with while loop we put values in q.
       
      while(!q.empty()) {
          
       int n = q.size();
       double sum = 0;  
          
      // going into q to find sum.
          
       for(int i=0;i<n;i++) {
        TreeNode* curr = q.front();
         if(curr->left) q.push(curr->left);
         if(curr->right) q.push(curr->right);
         sum += curr->val;
         q.pop();
           
       }
          
       ans.push_back(sum/n);
          
      }  
        
      return ans;
    // we simple use BFS - level oder and queue for data storing.
    }
};