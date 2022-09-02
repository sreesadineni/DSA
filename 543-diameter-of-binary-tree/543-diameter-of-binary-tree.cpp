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
    int ans=0;
    int help(TreeNode* r){
        if(r==NULL) return 0;
        int l=help(r->left);
        int ro=help(r->right);
        ans=max(ans,l+ro);
        return 1+max(l,ro);
    }
    int diameterOfBinaryTree(TreeNode* root) {
         help(root);
        return ans;
    }
};