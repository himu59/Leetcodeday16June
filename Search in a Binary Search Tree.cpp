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
    
    TreeNode* searchBST(TreeNode* root, int val) {
          // TreeNode* tmp = root;
          if(root == NULL) 
             return root;
          if(root->val == val) return root;
         else if(val > root -> val){
            // tmp = tmp->right;
            return searchBST(root->right,val);
            } 
          else if(val < root->val){
            // tmp = tmp->left;
            return searchBST(root->left,val);
            }
            return NULL;
    }
};
