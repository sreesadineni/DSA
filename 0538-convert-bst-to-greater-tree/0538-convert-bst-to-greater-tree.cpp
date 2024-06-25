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
    int i=0;
    void inorder(TreeNode * root){
       if(root==NULL){
           return ;
       } 
       inorder(root->right);
       i+=root->val; 
       root->val=i;
       inorder(root->left);
       
    }
    TreeNode* convertBST(TreeNode* root) {
        inorder(root);
        return root;
    }
};