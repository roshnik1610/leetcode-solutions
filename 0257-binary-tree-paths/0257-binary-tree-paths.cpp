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
    void solve(TreeNode* root, string path, vector<string>& ans){
        if( root->left==nullptr && root->right==nullptr){
            ans.push_back(path);
            return;
        }
        
        if( root->left!=nullptr){
            string leftpath= path+"->"+to_string(root->left->val);
            solve(root->left,leftpath,ans);
        }
        if(root->right!=nullptr){
            string rightpath= path+"->"+to_string(root->right->val);
            solve(root->right, rightpath, ans);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==nullptr){ return {};}
        
        vector<string>ans;
        string path=to_string(root->val);
        solve(root, path, ans);
        return ans;
    }
};