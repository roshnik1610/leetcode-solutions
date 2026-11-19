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
      TreeNode* dummy=root; TreeNode* ans= nullptr;
      if(root==nullptr){ return ans;}
      if(root->val==val){ return root;}
      if(root->val>val){
        ans=searchBST(dummy->left,val);
      }  
      if(root->val<val){
       ans= searchBST(dummy->right,val);
      }
      return ans;
    }
};