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

    int height(TreeNode * root){
        if(root==nullptr){ return 0;}
     
        return 1+ height(root->left);
    }
        int heightr(TreeNode * root){
        if(root==nullptr){ return 0;}
  
        return 1+ heightr(root->right);
    }
    int countNodes(TreeNode* root) {
        int ans=0; int rh=0, lh=0;

       if(root==nullptr){ return 0;}
      else{
        ans++;
      }
      lh= height(root);
      rh= heightr(root);
      if(lh==rh){
        return (1<<lh)-1;
      }

      return countNodes(root->left)+ countNodes(root->right)+1;
    }
};