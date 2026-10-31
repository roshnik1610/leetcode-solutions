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
    void solve (TreeNode* root, int targetSum, vector<int>& mid, vector<vector<int>> & ans){
        if(root == nullptr) return;TreeNode* hill= root;
        mid.push_back(hill->val);
        if(targetSum==hill->val && hill->left==nullptr && hill->right== nullptr  ){
            ans.push_back(mid);
        } 
           
        if(hill->left!=nullptr){
        solve(hill->left, targetSum-(hill->val), mid, ans);}
        
        if(hill->right!= nullptr){
        solve(hill->right, targetSum-(hill->val), mid, ans);}
        mid.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<vector<int>> ans;
 
        vector<int> mid;
       solve(root,targetSum, mid, ans);
     
        return ans;
    }
};