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

    void good( int& count, int maxfar , TreeNode* dummy){
        if( dummy== nullptr){ return;}
        
    if( dummy->val>= maxfar){  maxfar= max(maxfar, dummy->val);count++;}
    
    good(count, maxfar, dummy->left);
    good(count, maxfar, dummy->right);
    }
    int goodNodes(TreeNode* root) {
        if( root== nullptr){ return 0;}
    int count=1; 
    
    TreeNode* dummy= root;
    good(count,dummy->val, dummy->left);
    good(count, dummy->val, dummy->right);
    return count;

    }
};