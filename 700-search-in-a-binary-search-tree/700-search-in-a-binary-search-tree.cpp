/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int k) {
      
    TreeNode* curr=root;
    while(curr!=NULL){
        if(curr->val==k){
            return curr;
        }
        else if(curr->val > k){
            curr=curr->left;
        }
        else{
            curr=curr->right;
        }
    }
    return curr;
      
    }
};