class Solution {
public:
    void inor(TreeNode* root, int k, int& c, int& ans) {
        if (root==nullptr||c>= k) {
        return;
        }
        inor(root->left,k,c,ans);
        if (c>=k) return;
        c++;
        if (c==k) {
            ans = root->val;
            return;
        }
        inor(root->right,k,c,ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        int c = 0;
        int ans = -1;
        inor(root, k, c, ans);
        return ans;
    }
};